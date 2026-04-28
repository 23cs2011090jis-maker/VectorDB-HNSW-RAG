#define _WIN32_WINNT 0x0A00

#include <iostream>
#include <string>
#include "httplib.h"

int main() {
    httplib::Server server;

    // Root endpoint
    server.Get("/", [](const httplib::Request& req, httplib::Response& res) {
        res.set_content("Server is running!", "text/plain");
    });

    // Search endpoint (GET with query param)
    server.Get("/search", [](const httplib::Request& req, httplib::Response& res) {
        std::string query = req.get_param_value("q");
        res.set_content("Search: " + query, "text/plain");
    });

    // Ask endpoint (POST with body)
    server.Post("/ask", [](const httplib::Request& req, httplib::Response& res) {
        std::string body = req.body;

        if (body.empty()) {
            res.set_content("No data received", "text/plain");
        } else {
            res.set_content("You asked: " + body, "text/plain");
        }
    });

    std::cout << "Server running at http://localhost:8080\n";

    // Start server
    server.listen("0.0.0.0", 8080);

    return 0;
}
# 🚀 VectorDB + HNSW + RAG (C++)

A high-performance Vector Database built in C++ with:

- 🔍 HNSW (Hierarchical Navigable Small World) search
- 📊 Cosine similarity
- 🌐 HTTP API using cpp-httplib
- 🤖 RAG integration (Ollama / LLM-ready)
- 🎨 Interactive frontend visualization

---

## 🧩 Features

- Fast approximate nearest neighbor search
- REST API (`/search`, `/ask`)
- Vector insertion and querying
- Interactive UI for visualization
- Modular backend (C++)

---

## 🛠 Tech Stack

- C++
- cpp-httplib
- HTML/CSS/JS
- Ollama (for AI)

---

## ▶️ How to Run

### 1. Compile
```bash
g++ main.cpp -o server.exe -std=c++17
```

### 2. Run server
```bash
server.exe
```

### 3. Open UI
Open `index.html` in browser

---

## 📡 API Usage

### Search
```
GET /search?q=your_query
```

### Ask AI
```
POST /ask
Body: your question
```

---

## 📸 Demo

(Add screenshots here)

---

## 🧠 Future Improvements

- Persistent storage
- Better embeddings
- Scalable architecture

---

## 👨‍💻 Author

Roshan
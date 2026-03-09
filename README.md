# CI/CD Demo Project

Đây là project mẫu được xây dựng lại từ đầu để học về CI/CD.

## Cấu trúc thư mục
- `include/`: Chứa các file tiêu đề (.h)
- `src/`: Chứa mã nguồn chính (.cpp)
- `tests/`: Chứa mã nguồn kiểm thử (Unit Test) - **Đây là phần bạn tự viết để kiểm tra logic**
- `.github/workflows/`: Chứa "kịch bản" tự động hóa của GitHub Actions

## Cách Build cục bộ
```bash
mkdir build && cd build
cmake ..
make
./app
./run_tests
```

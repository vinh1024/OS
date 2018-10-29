## MỤC LỤC

- [1.1 What operating system do](#11)
- [1.2 Computer system Organization](#12)
- [1.3 Computer system architecture](#13)

## NỘI DUNG

## OVERVIEW

Operating system (OS - Hệ điều hành) đóng vai trò trung gian giữa người dùng và computer hardware. Mục đích của một OS là cung cấp một môi trường trong đó một user (người dùng) có thể thực thi các chương trình một cách thuận tiện và hiệu quả.

OS là một phần mềm quản lý computer hardware. Phần cứng phải cung cấp các cơ chế thích hợp để đảm bảo hoạt động dúng của hệ thống máy tinh và ngăn chặn các chương trình người dùng can thiệp vào họat động đúng của hệ thống.

Bên trong các OS là rất khác nhau vì chúng được tổ chức bằng nhiều câu lệnh khác nhau. Điều quan trọng là các mục đích của OS phải được định nghĩa trước khi bắt đầu thiết kế. Những mục tiêu này sẽ là nền tảng cho việc lựa chọn ra các thuật toán và chiến lược bên trong OS.

Bởi vì một OS là lớn và phức tạp vì vậy chúng phải được tạo từng piece. Mỗi pieces nên là một phần của hệ thống, với các inputs, outputs và functions được định nghĩa.

## INTRODUCTION

Một OS là một chương trình mà quản lý phần cứng máy tính. Nó cung cấp cơ sở cho application và các hoạt động như là một phần trung gian giữa user và hardware. Mainframe OS là được thiết kế chủ yếu để tối ưu hóa cách sử dụng phần cứng. PC(Personal computer) OS hỗ các game và ứng dụng phức tạp. OS cho mobile cung cấp một môi trường mà người dùng có thể tương tác và thực thi các chương trình một cách dễ dàng. Do đó một vài OS được thiết kế cho sự tiện lợi, số khác là cho tính hiệu quả cao hoặc có thể là tổ hợp của cả 2.

Trước khi tìm hiểu chi tiết OS, chúng ta cần biết về cấu trúc hệ thống, system startup cơ bản, I/O, và lưu trữ dữ liệu, kiến trúc máy tính cơ bản.

## 1.1 What operating system do?

Một hệ thống máy tính có thể chia thành 4 phần như sau: Hardware, OS, application program, users. The hardware - the cental processing unit (CPU), the memory và input/output devices - cung cấp tài nguyên tính toán cơ bản cho hệ thống. Application program đinh nghĩa các cash trong đó tài nguyên được sử dụng để giải quyết các vấn đề của user. OS điều khiển hardware và kết hợp việc sử dụng chúng giữa nhiều ứng dụng và người dùng.

Vai trò của OS được nhìn nhận tử 2 quan điểm: từ phía user và phía hệ thống.

### 1.1.1 User view


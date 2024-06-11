#include<bits/stdc++.h>
#include <conio.h>
using namespace std;

struct subject {
    int id;
    string name;
    int point[100]; // Giảm kích thước mảng để dễ dàng minh họa
    bool operator<(const subject& other) const { return id < other.id; }
};

struct student {
    int id;
    string Fullname;
    string DoB;
    string Address;
    string Parent;
    string PhoneNumber;
    int class_id[100]; // Giảm kích thước mảng để dễ dàng minh họa
    bool operator<(const student& other) const { return id < other.id; }
};

struct Class {
    int id;
    int subject_id;
    int teacher_id;
    bool operator<(const Class& other) const { return id < other.id; }
};

struct teacher {
    int id;
    string Fullname;
    string DoB;
    string PhoneNumber;
    bool operator<(const teacher& other) const { return id < other.id; }
};

set<student> students;
set<subject> subjects;
set<Class> classes;
set<teacher> teachers;

// Hàm hiển thị menu
void showMenu() {
    cout << "====================" << endl;
    cout << "1. Them moi" << endl;
    cout << "2. Sua" << endl;
    cout << "3. Xoa" << endl;
    cout << "4. Tim kiem" << endl;
    cout << "5. Luu vao file" << endl;
    cout << "6. Doc thong tin file" << endl;
    cout << "7. Thong ke" << endl;
    cout << "8. Thoat" << endl;
    cout << "====================" << endl;
    cout << "Chon chuc nang: ";
}

// Hàm thêm mới dữ liệu
void addItem() {
    cout << "Them moi du lieu" << endl;
    cout << "Chon loai du lieu (1: Student, 2: Subject, 3: Class, 4: Teacher): ";
    int type;
    cin >> type;
    switch(type) {
        case 1: {
            student s;
            cout << "Nhap id: "; cin >> s.id;
            cout << "Nhap ten day du: "; cin.ignore(); getline(cin, s.Fullname);
            cout << "Nhap ngay sinh: "; getline(cin, s.DoB);
            cout << "Nhap dia chi: "; getline(cin, s.Address);
            cout << "Nhap ten phu huynh: "; getline(cin, s.Parent);
            cout << "Nhap so dien thoai: "; getline(cin, s.PhoneNumber);
            students.insert(s);
            break;
        }
        case 2: {
            subject s;
            cout << "Nhap id: "; cin >> s.id;
            cout << "Nhap ten mon hoc: "; cin.ignore(); getline(cin, s.name);
            subjects.insert(s);
            break;
        }
        case 3: {
            Class c;
            cout << "Nhap id: "; cin >> c.id;
            cout << "Nhap id mon hoc: "; cin >> c.subject_id;
            cout << "Nhap id giao vien: "; cin >> c.teacher_id;
            classes.insert(c);
            break;
        }
        case 4: {
            teacher t;
            cout << "Nhap id: "; cin >> t.id;
            cout << "Nhap ten day du: "; cin.ignore(); getline(cin, t.Fullname);
            cout << "Nhap ngay sinh: "; getline(cin, t.DoB);
            cout << "Nhap so dien thoai: "; getline(cin, t.PhoneNumber);
            teachers.insert(t);
            break;
        }
        default:
            cout << "Lua chon khong hop le!" << endl;
            break;
    }
}

// Hàm sửa dữ liệu
void editItem() {
    cout << "Sua du lieu" << endl;
    cout << "Chon loai du lieu (1: Student, 2: Subject, 3: Class, 4: Teacher): ";
    int type;
    cin >> type;
    switch(type) {
        case 1: {
            int id;
            cout << "Nhap id cua hoc sinh can sua: "; cin >> id;
            auto it = students.find({id, "", "", "", "", ""});
            if (it != students.end()) {
                student s = *it;
                students.erase(it);
                cout << "Nhap ten day du moi: "; cin.ignore(); getline(cin, s.Fullname);
                cout << "Nhap ngay sinh moi: "; getline(cin, s.DoB);
                cout << "Nhap dia chi moi: "; getline(cin, s.Address);
                cout << "Nhap ten phu huynh moi: "; getline(cin, s.Parent);
                cout << "Nhap so dien thoai moi: "; getline(cin, s.PhoneNumber);
                students.insert(s);
            } else {
                cout << "Khong tim thay hoc sinh co id nay." << endl;
            }
            break;
        }
        case 2: {
            int id;
            cout << "Nhap id cua mon hoc can sua: "; cin >> id;
            auto it = subjects.find({id, "", {0}});
            if (it != subjects.end()) {
                subject s = *it;
                subjects.erase(it);
                cout << "Nhap ten mon hoc moi: "; cin.ignore(); getline(cin, s.name);
                subjects.insert(s);
            } else {
                cout << "Khong tim thay mon hoc co id nay." << endl;
            }
            break;
        }
        case 3: {
            int id;
            cout << "Nhap id cua lop hoc can sua: "; cin >> id;
            auto it = classes.find({id, 0, 0});
            if (it != classes.end()) {
                Class c = *it;
                classes.erase(it);
                cout << "Nhap id mon hoc moi: "; cin >> c.subject_id;
                cout << "Nhap id giao vien moi: "; cin >> c.teacher_id;
                classes.insert(c);
            } else {
                cout << "Khong tim thay lop hoc co id nay." << endl;
            }
            break;
        }
        case 4: {
            int id;
            cout << "Nhap id cua giao vien can sua: "; cin >> id;
            auto it = teachers.find({id, "", "", ""});
            if (it != teachers.end()) {
                teacher t = *it;
                teachers.erase(it);
                cout << "Nhap ten day du moi: "; cin.ignore(); getline(cin, t.Fullname);
                cout << "Nhap ngay sinh moi: "; getline(cin, t.DoB);
                cout << "Nhap so dien thoai moi: "; getline(cin, t.PhoneNumber);
                teachers.insert(t);
            } else {
                cout << "Khong tim thay giao vien co id nay." << endl;
            }
            break;
        }
        default:
            cout << "Lua chon khong hop le!" << endl;
            break;
    }
}

// Hàm xóa dữ liệu
void deleteItem() {
    cout << "Xoa du lieu" << endl;
    cout << "Chon loai du lieu (1: Student, 2: Subject, 3: Class, 4: Teacher): ";
    int type;
    cin >> type;
    switch(type) {
        case 1: {
            int id;
            cout << "Nhap id cua hoc sinh can xoa: "; cin >> id;
            auto it = students.find({id, "", "", "", "", ""});
            if (it != students.end()) {
                students.erase(it);
                cout << "Da xoa hoc sinh co id " << id << "." << endl;
            } else {
                cout << "Khong tim thay hoc sinh co id nay." << endl;
            }
            break;
        }
        case 2: {
            int id;
            cout << "Nhap id cua mon hoc can xoa: "; cin >> id;
            auto it = subjects.find({id, "", {0}});
            if (it != subjects.end()) {
                subjects.erase(it);
                cout << "Da xoa mon hoc co id " << id << "." << endl;
            } else {
                cout << "Khong tim thay mon hoc co id nay." << endl;
            }
            break;
        }
        case 3: {
            int id;
            cout << "Nhap id cua lop hoc can xoa: "; cin >> id;
            auto it = classes.find({id, 0, 0});
            if (it != classes.end()) {
                classes.erase(it);
                cout << "Da xoa lop hoc co id " << id << "." << endl;
            } else {
                cout << "Khong tim thay lop hoc co id nay." << endl;
            }
            break;
        }
        case 4: {
            int id;
            cout << "Nhap id cua giao vien can xoa: "; cin >> id;
            auto it = teachers.find({id, "", "", ""});
            if (it != teachers.end()) {
                teachers.erase(it);
                cout << "Da xoa giao vien co id " << id << "." << endl;
            } else {
                cout << "Khong tim thay giao vien co id nay." << endl;
            }
            break;
        }
        default:
            cout << "Lua chon khong hop le!" << endl;
            break;
    }
}

// Hàm tìm kiếm dữ liệu
void searchItem() {
    cout << "Tim kiem du lieu" << endl;
    cout << "Chon loai du lieu (1: Student, 2: Subject, 3: Class, 4: Teacher): ";
    int type;
    cin >> type;
    switch(type) {
        case 1: {
            int id;
            cout << "Nhap id cua hoc sinh can tim: "; cin >> id;
            auto it = students.find({id, "", "", "", "", ""});
            if (it != students.end()) {
                student s = *it;
                cout << "Thong tin hoc sinh: " << endl;
                cout << "ID: " << s.id << endl;
                cout << "Ten day du: " << s.Fullname << endl;
                cout << "Ngay sinh: " << s.DoB << endl;
                cout << "Dia chi: " << s.Address << endl;
                cout << "Ten phu huynh: " << s.Parent << endl;
                cout << "So dien thoai: " << s.PhoneNumber << endl;
            } else {
                cout << "Khong tim thay hoc sinh co id nay." << endl;
            }
            break;
        }
        case 2: {
            int id;
            cout << "Nhap id cua mon hoc can tim: "; cin >> id;
            auto it = subjects.find({id, "", {0}});
            if (it != subjects.end()) {
                subject s = *it;
                cout << "Thong tin mon hoc: " << endl;
                cout << "ID: " << s.id << endl;
                cout << "Ten mon hoc: " << s.name << endl;
            } else {
                cout << "Khong tim thay mon hoc co id nay." << endl;
            }
            break;
        }
        case 3: {
            int id;
            cout << "Nhap id cua lop hoc can tim: "; cin >> id;
            auto it = classes.find({id, 0, 0});
            if (it != classes.end()) {
                Class c = *it;
                cout << "Thong tin lop hoc: " << endl;
                cout << "ID: " << c.id << endl;
                cout << "ID mon hoc: " << c.subject_id << endl;
                cout << "ID giao vien: " << c.teacher_id << endl;
            } else {
                cout << "Khong tim thay lop hoc co id nay." << endl;
            }
            break;
        }
        case 4: {
            int id;
            cout << "Nhap id cua giao vien can tim: "; cin >> id;
            auto it = teachers.find({id, "", "", ""});
            if (it != teachers.end()) {
                teacher t = *it;
                cout << "Thong tin giao vien: " << endl;
                cout << "ID: " << t.id << endl;
                cout << "Ten day du: " << t.Fullname << endl;
                cout << "Ngay sinh: " << t.DoB << endl;
                cout << "So dien thoai: " << t.PhoneNumber << endl;
            } else {
                cout << "Khong tim thay giao vien co id nay." << endl;
            }
            break;
        }
        default:
            cout << "Lua chon khong hop le!" << endl;
            break;
    }
}

// Hàm lưu dữ liệu vào file
void saveToFile() {
    cout << "Luu du lieu vao file" << endl;
    ofstream out("data.txt");
    for (const auto& s : students) {
        out << s.id << "\n" << s.Fullname << "\n" << s.DoB << "\n" << s.Address << "\n" << s.Parent << "\n" << s.PhoneNumber << endl;
    }
    for (const auto& s : subjects) {
        out << s.id << "\n" << s.name << endl;
    }
    for (const auto& c : classes) {
        out << c.id << "\n" << c.subject_id << "\n" << c.teacher_id << endl;
    }
    for (const auto& t : teachers) {
        out << t.id << "\n" << t.Fullname << "\n" << t.DoB << "\n" << t.PhoneNumber << endl;
    }
    out.close();
}
// Hàm hiển thị thông tin
void displayData() {
    cout << "Danh sach sinh vien:" << endl;
    for (const auto &s : students) {
        cout << "ID: " << s.id << ", Ten: " << s.Fullname << ", Ngay sinh: " << s.DoB << ", Dia chi: " << s.Address
             << ", Phu huynh: " << s.Parent << ", SDT: " << s.PhoneNumber << endl;
    }

    cout << "\nDanh sach mon hoc:" << endl;
    for (const auto &s : subjects) {
        cout << "ID: " << s.id << ", Ten: " << s.name << endl;
    }

    cout << "\nDanh sach lop hoc:" << endl;
    for (const auto &c : classes) {
        cout << "ID: " << c.id << ", ID Mon hoc: " << c.subject_id << ", ID Giao vien: " << c.teacher_id << endl;
    }

    cout << "\nDanh sach giao vien:" << endl;
    for (const auto &t : teachers) {
        cout << "ID: " << t.id << ", Ten: " << t.Fullname << ", Ngay sinh: " << t.DoB << ", SDT: " << t.PhoneNumber << endl;
    }
}
// Hàm thống kê dữ liệu
void statistics() {
    cout << "Thong ke du lieu" << endl;
    cout << "So luong hoc sinh: " << students.size() << endl;
    cout << "So luong mon hoc: " << subjects.size() << endl;
    cout << "So luong lop hoc: " << classes.size() << endl;
    cout << "So luong giao vien: " << teachers.size() << endl;
}

int main() {
    int choice;
    do {
        system("cls"); // Xóa màn hình console
        showMenu(); // Hiển thị menu

        // Chờ người dùng nhấn phím
        while (!kbhit()) {
            // Có thể thực hiện các công việc khác nếu cần
        }

        // Lấy phím người dùng nhấn và chuyển sang số nguyên
        choice = getch() - '0';

        system("cls"); // Xóa màn hình console
        switch (choice) {
            case 1: addItem(); break;
            case 2: editItem(); break;
            case 3: deleteItem(); break;
            case 4: searchItem(); break;
            case 5: saveToFile(); break;
            case 6: displayData(); break;
            case 7: statistics(); break;
            case 8: cout << "Thoat chuong trinh." << endl; break;
            default: cout << "Lua chon khong hop le!" << endl; break;
        }

        if (choice != 8) {
            cout << "Nhan phim bat ky de quay lai menu..." << endl;
            getch(); // Đợi người dùng nhấn phím để quay lại menu
        }
    } while (choice != 9);

    return 0;
}


#include <iostream>
#include <string>
#include <chrono>

int main() {
    // 100,000������ 'a' �ŏ��������ꂽ��������쐬
    std::string a(100000, 'a');

    // �R�s�[�ɂ����鎞�Ԃ��v��
    auto start_copy = std::chrono::high_resolution_clock::now();
    std::string b = a;  // a��b�ɑ���i�R�s�[�j
    auto end_copy = std::chrono::high_resolution_clock::now();  // ���ݎ������擾
    auto copy_duration = std::chrono::duration_cast<std::chrono::microseconds>(end_copy - start_copy).count();

    // ���[�u�ɂ����鎞�Ԃ��v��
    auto start_move = std::chrono::high_resolution_clock::now();  // ���ݎ������擾
    std::string c = std::move(b);  // ���[�u
    auto end_move = std::chrono::high_resolution_clock::now();  // ���ݎ������擾
    auto move_duration = std::chrono::duration_cast<std::chrono::microseconds>(end_move - start_move).count();

    // ���ʂ�\��
    std::cout << "100,000�������ړ��ƃR�s�[�Ŕ�r" << std::endl;
    std::cout << "�R�s�[: " << copy_duration << " ��s" << std::endl;
    std::cout << "�ړ�  : " << move_duration << " ��s" << std::endl;

    // �I���ҋ@
    std::cout << "���s����ɂ͉����L�[�������Ă��������c";
    std::cin.get();

    return 0;
}
# dbmw_misc 分散 TU 编译器版本根因（2026-08-15）

## 结论
- 28 个分散函数 DIFF/NEAR 的根因是编译器版本不匹配（4.1.2 vs 4.4.6/4.4.7），不是源码结构/栈范围 bug。
- 已用最小片段 + 实际 c5 编译 DNFMySql.cpp 验证：
  - `x->member = f()`：
    - 4.1.2: `mov %eax,%edx; mov this,%eax; mov %edx,off(%eax)`（ORIG）
    - 4.4.x: `mov this,%edx; mov %eax,off(%edx)`（当前）
  - 实编 DNFMySql.cpp(c5, -std=gnu++98) 的 open() 精确复现 ORIG 的 `mov %eax,%edx; mov 0x8(%ebp),%eax; mov %edx,0x42088(%eax)`。
- 需 root 改 CMake/flags：
  1. DNFMySql.cpp 改 4.1.2（当前 -B/tmp/cc1plus446bin=4.4.6 错误）。
  2. DNFPacketTracer.cpp 疑似 4.1.2（ctor 冗余双移）。
  3. `-std=gnu++0x` 阻塞 4.1.2（需 gnu++98）。
  4. ORIG .comment 主导是 4.4.4-13(7) + 4.1.2-52(2) + 4.4.6-3(1) + 4.4.7-1(1)，当前 dbmw 映射整体需重核。

## scope 内源码核查（均无 bug）
- 缓冲区大小（blob 0x6070+9、m_query 0x6001、buf[0x3c]/[0x20]）与 ORIG 一致。
- 字段布局/命名无裸偏移问题。
- 无未还原 `(char*)this` 成员。

## 剩余函数 = 编译器尾音
- 4.1.2 vs 4.4.x 寄存器分配：CMySql open×2/exec/exec_query、CPacketTracer ctor、WriteDBLog 参数直载。
- 栈槽/栈帧：Parse_Table、send_packet、parsing、GetFrameCountInfo(ORIG 多 4 个 0 初始化局部)、WritePacketProcessLog。
- 分支极性/nop 对齐：AfterProcess、parsing、dispatch、InitFrameCountInfo。
- allocStackBuffer 仅 LHS/RHS 加载顺序 2 指令（NEAR）。

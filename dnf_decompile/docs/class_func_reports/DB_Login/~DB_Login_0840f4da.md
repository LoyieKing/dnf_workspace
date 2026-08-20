# ~DB_Login

`_ZN8DB_LoginD0Ev`

`DB_Login::~DB_Login()`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x0840f4da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840f4da  _ZN8DB_LoginD0Ev
#           DB_Login::~DB_Login()
# range [0x0840f4da, 0x0840f4f7]
0840f4da +0x00:  push   %ebp
0840f4db +0x01:  mov    %esp,%ebp
0840f4dd +0x03:  sub    $0x18,%esp
0840f4e0 +0x06:  mov    0x8(%ebp),%eax
0840f4e3 +0x09:  mov    %eax,(%esp)
0840f4e6 +0x0c:  call   0840f4aa <_ZN8DB_LoginD1Ev>  ; DB_Login::~DB_Login()
0840f4eb +0x11:  mov    0x8(%ebp),%eax
0840f4ee +0x14:  mov    %eax,(%esp)
0840f4f1 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0840f4f6 +0x1c:  leave
0840f4f7 +0x1d:  ret
```

## 反编译 C

```c
// DB_Login::~DB_Login @ 0x840f4da

/* DB_Login::~DB_Login() */

void __thiscall DB_Login::~DB_Login(DB_Login *this)

{
  ~DB_Login(this);
  operator_delete(this);
  return;
}
```

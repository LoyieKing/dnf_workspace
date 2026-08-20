# ~DB_Login

`_ZN8DB_LoginD1Ev`

`DB_Login::~DB_Login()`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x0840f4aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840f4aa  _ZN8DB_LoginD1Ev
#           DB_Login::~DB_Login()
# range [0x0840f4aa, 0x0840f4d9]
0840f4aa +0x00:  push   %ebp
0840f4ab +0x01:  mov    %esp,%ebp
0840f4ad +0x03:  sub    $0x18,%esp
0840f4b0 +0x06:  mov    0x8(%ebp),%eax
0840f4b3 +0x09:  movl   $&_ZTV8DB_Login+0x8,(%eax)
0840f4b9 +0x0f:  mov    0x8(%ebp),%eax
0840f4bc +0x12:  mov    %eax,(%esp)
0840f4bf +0x15:  call   080e2378 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x11e>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x11e
0840f4c4 +0x1a:  mov    $0x0,%eax
0840f4c9 +0x1f:  test   %al,%al
0840f4cb +0x21:  je     0840f4d8 <+0x2e>
0840f4cd +0x23:  mov    0x8(%ebp),%eax
0840f4d0 +0x26:  mov    %eax,(%esp)
0840f4d3 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0840f4d8 +0x2e:  leave
0840f4d9 +0x2f:  ret
```

## 反编译 C

```c
// DB_Login::~DB_Login @ 0x840f4aa

/* WARNING: Removing unreachable block (ram,0x0840f4cd) */
/* DB_Login::~DB_Login() */

void __thiscall DB_Login::~DB_Login(DB_Login *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fb10;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}
```

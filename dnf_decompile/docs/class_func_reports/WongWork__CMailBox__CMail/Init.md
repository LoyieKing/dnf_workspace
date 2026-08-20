# Init

`_ZN8WongWork8CMailBox5CMail4InitEv`

`WongWork::CMailBox::CMail::Init()`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBox::CMail` | `0x085519e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085519e2  _ZN8WongWork8CMailBox5CMail4InitEv
#           WongWork::CMailBox::CMail::Init()
# range [0x085519e2, 0x085519fd]
085519e2 +0x00:  push   %ebp
085519e3 +0x01:  mov    %esp,%ebp
085519e5 +0x03:  sub    $0x18,%esp
085519e8 +0x06:  mov    0x8(%ebp),%eax
085519eb +0x09:  movl   $0x0,(%eax)
085519f1 +0x0f:  mov    0x8(%ebp),%eax
085519f4 +0x12:  mov    %eax,(%esp)
085519f7 +0x15:  call   085519fe <_ZN8WongWork8CMailBox5CMail12ResetPackageEv>  ; WongWork::CMailBox::CMail::ResetPackage()
085519fc +0x1a:  leave
085519fd +0x1b:  ret
```

## 反编译 C

```c
// WongWork::CMailBox::CMail::Init @ 0x85519e2

/* WongWork::CMailBox::CMail::Init() */

void __thiscall WongWork::CMailBox::CMail::Init(CMail *this)

{
  *(undefined4 *)this = 0;
  ResetPackage(this);
  return;
}
```

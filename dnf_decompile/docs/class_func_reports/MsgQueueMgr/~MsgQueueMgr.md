# ~MsgQueueMgr

`_ZN11MsgQueueMgrD1Ev`

`MsgQueueMgr::~MsgQueueMgr()`

| 类 | 地址 |
|---|---|
| `MsgQueueMgr` | `0x08570f42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08570f42  _ZN11MsgQueueMgrD1Ev
#           MsgQueueMgr::~MsgQueueMgr()
# range [0x08570f42, 0x08570fdd]
08570f42 +0x00:  push   %ebp
08570f43 +0x01:  mov    %esp,%ebp
08570f45 +0x03:  push   %edi
08570f46 +0x04:  push   %esi
08570f47 +0x05:  push   %ebx
08570f48 +0x06:  sub    $0x1c,%esp
08570f4b +0x09:  mov    0x8(%ebp),%eax
08570f4e +0x0c:  add    $0x90,%eax
08570f53 +0x11:  test   %eax,%eax
08570f55 +0x13:  je     08570fb2 <+0x70>
08570f57 +0x15:  mov    0x8(%ebp),%eax
08570f5a +0x18:  add    $0x90,%eax
08570f5f +0x1d:  lea    0xf0(%eax),%ebx
08570f65 +0x23:  mov    0x8(%ebp),%eax
08570f68 +0x26:  add    $0x90,%eax
08570f6d +0x2b:  cmp    %eax,%ebx
08570f6f +0x2d:  je     08570fb2 <+0x70>
08570f71 +0x2f:  sub    $0x28,%ebx
08570f74 +0x32:  mov    %ebx,(%esp)
08570f77 +0x35:  call   085712b4 <_GLOBAL__I__ZN11MsgQueueMgrC2Ev+0x1c>  ; global constructors keyed to MsgQueueMgr::MsgQueueMgr()+0x1c
08570f7c +0x3a:  jmp    08570f65 <+0x23>
08570f7e +0x3c:  mov    %edx,%esi
08570f80 +0x3e:  mov    %eax,%edi
08570f82 +0x40:  mov    0x8(%ebp),%eax
08570f85 +0x43:  test   %eax,%eax
08570f87 +0x45:  je     08570fa6 <+0x64>
08570f89 +0x47:  mov    0x8(%ebp),%eax
08570f8c +0x4a:  lea    0x90(%eax),%ebx
08570f92 +0x50:  mov    0x8(%ebp),%eax
08570f95 +0x53:  cmp    %eax,%ebx
08570f97 +0x55:  je     08570fa6 <+0x64>
08570f99 +0x57:  sub    $0x18,%ebx
08570f9c +0x5a:  mov    %ebx,(%esp)
08570f9f +0x5d:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
08570fa4 +0x62:  jmp    08570f92 <+0x50>
08570fa6 +0x64:  mov    %edi,%eax
08570fa8 +0x66:  mov    %esi,%edx
08570faa +0x68:  mov    %eax,(%esp)
08570fad +0x6b:  call   08ae3750 <_Unwind_Resume>
08570fb2 +0x70:  mov    0x8(%ebp),%eax
08570fb5 +0x73:  test   %eax,%eax
08570fb7 +0x75:  je     08570fd6 <+0x94>
08570fb9 +0x77:  mov    0x8(%ebp),%eax
08570fbc +0x7a:  lea    0x90(%eax),%ebx
08570fc2 +0x80:  mov    0x8(%ebp),%eax
08570fc5 +0x83:  cmp    %eax,%ebx
08570fc7 +0x85:  je     08570fd6 <+0x94>
08570fc9 +0x87:  sub    $0x18,%ebx
08570fcc +0x8a:  mov    %ebx,(%esp)
08570fcf +0x8d:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
08570fd4 +0x92:  jmp    08570fc2 <+0x80>
08570fd6 +0x94:  add    $0x1c,%esp
08570fd9 +0x97:  pop    %ebx
08570fda +0x98:  pop    %esi
08570fdb +0x99:  pop    %edi
08570fdc +0x9a:  pop    %ebp
08570fdd +0x9b:  ret
```

## 反编译 C

```c
// MsgQueueMgr::~MsgQueueMgr @ 0x8570f42

/* MsgQueueMgr::~MsgQueueMgr() */

void __thiscall MsgQueueMgr::~MsgQueueMgr(MsgQueueMgr *this)

{
  queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>> *this_00;
  Mutex *this_01;
  
  if (this != (MsgQueueMgr *)0xffffff70) {
    this_00 = (queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>> *)(this + 0x180);
    while (this_00 != (queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>> *)(this + 0x90)) {
      this_00 = this_00 + -0x28;
                    /* try { // try from 08570f77 to 08570f7b has its CatchHandler @ 08570f7e */
      std::queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>>::~queue(this_00);
    }
  }
  if (this != (MsgQueueMgr *)0x0) {
    this_01 = (Mutex *)(this + 0x90);
    while (this_01 != (Mutex *)this) {
      this_01 = this_01 + -0x18;
      Mutex::~Mutex(this_01);
    }
  }
  return;
}
```

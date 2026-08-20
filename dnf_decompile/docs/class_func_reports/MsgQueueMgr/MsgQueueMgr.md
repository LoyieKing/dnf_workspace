# MsgQueueMgr

`_ZN11MsgQueueMgrC1Ev`

`MsgQueueMgr::MsgQueueMgr()`

| 类 | 地址 |
|---|---|
| `MsgQueueMgr` | `0x08570e40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08570e40  _ZN11MsgQueueMgrC1Ev
#           MsgQueueMgr::MsgQueueMgr()
# range [0x08570e40, 0x08570f3d]
08570e40 +0x00:  push   %ebp
08570e41 +0x01:  mov    %esp,%ebp
08570e43 +0x03:  push   %edi
08570e44 +0x04:  push   %esi
08570e45 +0x05:  push   %ebx
08570e46 +0x06:  sub    $0x5c,%esp
08570e49 +0x09:  mov    0x8(%ebp),%eax
08570e4c +0x0c:  mov    %eax,%ebx
08570e4e +0x0e:  mov    $0x5,%esi
08570e53 +0x13:  jmp    08570e63 <+0x23>
08570e55 +0x15:  mov    %ebx,(%esp)
08570e58 +0x18:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
08570e5d +0x1d:  add    $0x18,%ebx
08570e60 +0x20:  sub    $0x1,%esi
08570e63 +0x23:  cmp    $0xffffffff,%esi
08570e66 +0x26:  setne  %al
08570e69 +0x29:  test   %al,%al
08570e6b +0x2b:  jne    08570e55 <+0x15>
08570e6d +0x2d:  mov    0x8(%ebp),%eax
08570e70 +0x30:  lea    0x90(%eax),%esi
08570e76 +0x36:  mov    %esi,%edi
08570e78 +0x38:  mov    $0x5,%ebx
08570e7d +0x3d:  jmp    08570ec3 <+0x83>
08570e7f +0x3f:  lea    -0x40(%ebp),%eax
08570e82 +0x42:  mov    %eax,(%esp)
08570e85 +0x45:  call   085712c8 <_GLOBAL__I__ZN11MsgQueueMgrC2Ev+0x30>  ; global constructors keyed to MsgQueueMgr::MsgQueueMgr()+0x30
08570e8a +0x4a:  lea    -0x40(%ebp),%eax
08570e8d +0x4d:  mov    %eax,0x4(%esp)
08570e91 +0x51:  mov    %edi,(%esp)
08570e94 +0x54:  call   0857136a <_GLOBAL__I__ZN11MsgQueueMgrC2Ev+0xd2>  ; global constructors keyed to MsgQueueMgr::MsgQueueMgr()+0xd2
08570e99 +0x59:  jmp    08570eb2 <+0x72>
08570e9b +0x5b:  mov    %edx,%edi
08570e9d +0x5d:  mov    %eax,-0x50(%ebp)
08570ea0 +0x60:  lea    -0x40(%ebp),%eax
08570ea3 +0x63:  mov    %eax,(%esp)
08570ea6 +0x66:  call   085712dc <_GLOBAL__I__ZN11MsgQueueMgrC2Ev+0x44>  ; global constructors keyed to MsgQueueMgr::MsgQueueMgr()+0x44
08570eab +0x6b:  mov    -0x50(%ebp),%eax
08570eae +0x6e:  mov    %edi,%edx
08570eb0 +0x70:  jmp    08570ecf <+0x8f>
08570eb2 +0x72:  lea    -0x40(%ebp),%eax
08570eb5 +0x75:  mov    %eax,(%esp)
08570eb8 +0x78:  call   085712dc <_GLOBAL__I__ZN11MsgQueueMgrC2Ev+0x44>  ; global constructors keyed to MsgQueueMgr::MsgQueueMgr()+0x44
08570ebd +0x7d:  add    $0x28,%edi
08570ec0 +0x80:  sub    $0x1,%ebx
08570ec3 +0x83:  cmp    $0xffffffff,%ebx
08570ec6 +0x86:  setne  %al
08570ec9 +0x89:  test   %al,%al
08570ecb +0x8b:  jne    08570e7f <+0x3f>
08570ecd +0x8d:  jmp    08570f11 <+0xd1>
08570ecf +0x8f:  mov    %edx,%edi
08570ed1 +0x91:  mov    %eax,-0x4c(%ebp)
08570ed4 +0x94:  test   %esi,%esi
08570ed6 +0x96:  je     08570eff <+0xbf>
08570ed8 +0x98:  mov    $0x5,%eax
08570edd +0x9d:  sub    %ebx,%eax
08570edf +0x9f:  mov    %eax,%edx
08570ee1 +0xa1:  mov    %edx,%eax
08570ee3 +0xa3:  shl    $0x2,%eax
08570ee6 +0xa6:  add    %edx,%eax
08570ee8 +0xa8:  shl    $0x3,%eax
08570eeb +0xab:  lea    (%esi,%eax,1),%ebx
08570eee +0xae:  cmp    %esi,%ebx
08570ef0 +0xb0:  je     08570eff <+0xbf>
08570ef2 +0xb2:  sub    $0x28,%ebx
08570ef5 +0xb5:  mov    %ebx,(%esp)
08570ef8 +0xb8:  call   085712b4 <_GLOBAL__I__ZN11MsgQueueMgrC2Ev+0x1c>  ; global constructors keyed to MsgQueueMgr::MsgQueueMgr()+0x1c
08570efd +0xbd:  jmp    08570eee <+0xae>
08570eff +0xbf:  mov    -0x4c(%ebp),%eax
08570f02 +0xc2:  mov    %edi,%edx
08570f04 +0xc4:  mov    %edx,%esi
08570f06 +0xc6:  mov    %eax,%edi
08570f08 +0xc8:  mov    0x8(%ebp),%eax
08570f0b +0xcb:  test   %eax,%eax
08570f0d +0xcd:  je     08570f36 <+0xf6>
08570f0f +0xcf:  jmp    08570f19 <+0xd9>
08570f11 +0xd1:  add    $0x5c,%esp
08570f14 +0xd4:  pop    %ebx
08570f15 +0xd5:  pop    %esi
08570f16 +0xd6:  pop    %edi
08570f17 +0xd7:  pop    %ebp
08570f18 +0xd8:  ret
08570f19 +0xd9:  mov    0x8(%ebp),%eax
08570f1c +0xdc:  lea    0x90(%eax),%ebx
08570f22 +0xe2:  mov    0x8(%ebp),%eax
08570f25 +0xe5:  cmp    %eax,%ebx
08570f27 +0xe7:  je     08570f36 <+0xf6>
08570f29 +0xe9:  sub    $0x18,%ebx
08570f2c +0xec:  mov    %ebx,(%esp)
08570f2f +0xef:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
08570f34 +0xf4:  jmp    08570f22 <+0xe2>
08570f36 +0xf6:  mov    %edi,%eax
08570f38 +0xf8:  mov    %esi,%edx
08570f3a +0xfa:  mov    %eax,(%esp)
08570f3d +0xfd:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// MsgQueueMgr::MsgQueueMgr @ 0x8570e40

/* MsgQueueMgr::MsgQueueMgr() */

void __thiscall MsgQueueMgr::MsgQueueMgr(MsgQueueMgr *this)

{
  MsgQueueMgr *this_00;
  int iVar1;
  queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>> *this_01;
  deque<Stream*,std::allocator<Stream*>> local_44 [52];
  
  this_00 = this;
  for (iVar1 = 5; iVar1 != -1; iVar1 = iVar1 + -1) {
    Mutex::Mutex((Mutex *)this_00);
    this_00 = this_00 + 0x18;
  }
  this_01 = (queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>> *)(this + 0x90);
  for (iVar1 = 5; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08570e85 to 08570e89 has its CatchHandler @ 08570ecf */
    std::deque<Stream*,std::allocator<Stream*>>::deque(local_44);
                    /* try { // try from 08570e94 to 08570e98 has its CatchHandler @ 08570e9b */
    std::queue<Stream*,std::deque<Stream*,std::allocator<Stream*>>>::queue
              (this_01,(deque *)local_44);
                    /* try { // try from 08570eb8 to 08570ebc has its CatchHandler @ 08570ecf */
    std::deque<Stream*,std::allocator<Stream*>>::~deque(local_44);
    this_01 = this_01 + 0x28;
  }
  return;
}
```

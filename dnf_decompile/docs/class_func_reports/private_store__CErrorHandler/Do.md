# Do

`_ZN13private_store13CErrorHandler2DoEi`

`private_store::CErrorHandler::Do(int)`

| 类 | 地址 |
|---|---|
| `private_store::CErrorHandler` | `0x085c4c7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c4c7c  _ZN13private_store13CErrorHandler2DoEi
#           private_store::CErrorHandler::Do(int)
# range [0x085c4c7c, 0x085c4d0f]
085c4c7c +0x00:  push   %ebp
085c4c7d +0x01:  mov    %esp,%ebp
085c4c7f +0x03:  push   %esi
085c4c80 +0x04:  push   %ebx
085c4c81 +0x05:  sub    $0x20,%esp
085c4c84 +0x08:  mov    0x8(%ebp),%eax
085c4c87 +0x0b:  mov    (%eax),%eax
085c4c89 +0x0d:  test   %eax,%eax
085c4c8b +0x0f:  jne    085c4c94 <+0x18>
085c4c8d +0x11:  mov    $0x0,%ebx
085c4c92 +0x16:  jmp    085c4d06 <+0x8a>
085c4c94 +0x18:  lea    -0x14(%ebp),%eax
085c4c97 +0x1b:  mov    %eax,(%esp)
085c4c9a +0x1e:  call   085cb972 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x688>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x688
085c4c9f +0x23:  mov    0x8(%ebp),%eax
085c4ca2 +0x26:  mov    0x8(%eax),%edx
085c4ca5 +0x29:  mov    0x8(%ebp),%eax
085c4ca8 +0x2c:  mov    0x4(%eax),%eax
085c4cab +0x2f:  mov    0xc(%ebp),%ecx
085c4cae +0x32:  mov    %ecx,0xc(%esp)
085c4cb2 +0x36:  mov    %edx,0x8(%esp)
085c4cb6 +0x3a:  mov    %eax,0x4(%esp)
085c4cba +0x3e:  lea    -0x14(%ebp),%eax
085c4cbd +0x41:  mov    %eax,(%esp)
085c4cc0 +0x44:  call   085cc830 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1546>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1546
085c4cc5 +0x49:  mov    0x8(%ebp),%eax
085c4cc8 +0x4c:  mov    (%eax),%eax
085c4cca +0x4e:  lea    -0x14(%ebp),%edx
085c4ccd +0x51:  mov    %edx,0x4(%esp)
085c4cd1 +0x55:  mov    %eax,(%esp)
085c4cd4 +0x58:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085c4cd9 +0x5d:  mov    $0x1,%ebx
085c4cde +0x62:  lea    -0x14(%ebp),%eax
085c4ce1 +0x65:  mov    %eax,(%esp)
085c4ce4 +0x68:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085c4ce9 +0x6d:  jmp    085c4d06 <+0x8a>
085c4ceb +0x6f:  mov    %edx,%ebx
085c4ced +0x71:  mov    %eax,%esi
085c4cef +0x73:  lea    -0x14(%ebp),%eax
085c4cf2 +0x76:  mov    %eax,(%esp)
085c4cf5 +0x79:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085c4cfa +0x7e:  mov    %esi,%eax
085c4cfc +0x80:  mov    %ebx,%edx
085c4cfe +0x82:  mov    %eax,(%esp)
085c4d01 +0x85:  call   08ae3750 <_Unwind_Resume>
085c4d06 +0x8a:  mov    %ebx,%eax
085c4d08 +0x8c:  add    $0x20,%esp
085c4d0b +0x8f:  pop    %ebx
085c4d0c +0x90:  pop    %esi
085c4d0d +0x91:  pop    %ebp
085c4d0e +0x92:  ret
085c4d0f +0x93:  nop
```

## 反编译 C

```c
// private_store::CErrorHandler::Do @ 0x85c4c7c

/* private_store::CErrorHandler::Do(int) */

bool __thiscall private_store::CErrorHandler::Do(CErrorHandler *this,int param_1)

{
  int iVar1;
  CPacketBufPrivate local_18 [12];
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    CPacketBufPrivate::CPacketBufPrivate(local_18);
                    /* try { // try from 085c4cc0 to 085c4cd8 has its CatchHandler @ 085c4ceb */
    CPacketBufPrivate::MakeErrorReturnPacket(local_18,*(int *)(this + 4),*(int *)(this + 8),param_1)
    ;
    CUser::Send(*(CUser **)this,(PacketGuard *)local_18);
    CPacketBufPrivate::~CPacketBufPrivate(local_18);
  }
  return iVar1 != 0;
}
```

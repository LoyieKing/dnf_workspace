# HandleError

`_ZN13private_store16CPrivateStoreMgr11HandleErrorEP5CUseriii`

`private_store::CPrivateStoreMgr::HandleError(CUser*, int, int, int)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStoreMgr` | `0x085caaaa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085caaaa  _ZN13private_store16CPrivateStoreMgr11HandleErrorEP5CUseriii
#           private_store::CPrivateStoreMgr::HandleError(CUser*, int, int, int)
# range [0x085caaaa, 0x085cab23]
085caaaa +0x00:  push   %ebp
085caaab +0x01:  mov    %esp,%ebp
085caaad +0x03:  push   %esi
085caaae +0x04:  push   %ebx
085caaaf +0x05:  sub    $0x20,%esp
085caab2 +0x08:  lea    -0x14(%ebp),%eax
085caab5 +0x0b:  mov    %eax,(%esp)
085caab8 +0x0e:  call   085cb972 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x688>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x688
085caabd +0x13:  mov    0x18(%ebp),%eax
085caac0 +0x16:  mov    %eax,0xc(%esp)
085caac4 +0x1a:  mov    0x14(%ebp),%eax
085caac7 +0x1d:  mov    %eax,0x8(%esp)
085caacb +0x21:  mov    0x10(%ebp),%eax
085caace +0x24:  mov    %eax,0x4(%esp)
085caad2 +0x28:  lea    -0x14(%ebp),%eax
085caad5 +0x2b:  mov    %eax,(%esp)
085caad8 +0x2e:  call   085cc830 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1546>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1546
085caadd +0x33:  lea    -0x14(%ebp),%eax
085caae0 +0x36:  mov    %eax,0x4(%esp)
085caae4 +0x3a:  mov    0xc(%ebp),%eax
085caae7 +0x3d:  mov    %eax,(%esp)
085caaea +0x40:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085caaef +0x45:  mov    $0x0,%ebx
085caaf4 +0x4a:  lea    -0x14(%ebp),%eax
085caaf7 +0x4d:  mov    %eax,(%esp)
085caafa +0x50:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085caaff +0x55:  mov    %ebx,%eax
085cab01 +0x57:  add    $0x20,%esp
085cab04 +0x5a:  pop    %ebx
085cab05 +0x5b:  pop    %esi
085cab06 +0x5c:  pop    %ebp
085cab07 +0x5d:  ret
085cab08 +0x5e:  mov    %edx,%ebx
085cab0a +0x60:  mov    %eax,%esi
085cab0c +0x62:  lea    -0x14(%ebp),%eax
085cab0f +0x65:  mov    %eax,(%esp)
085cab12 +0x68:  call   085ccaac <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x17c2>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x17c2
085cab17 +0x6d:  mov    %esi,%eax
085cab19 +0x6f:  mov    %ebx,%edx
085cab1b +0x71:  mov    %eax,(%esp)
085cab1e +0x74:  call   08ae3750 <_Unwind_Resume>
085cab23 +0x79:  nop
```

## 反编译 C

```c
// private_store::CPrivateStoreMgr::HandleError @ 0x85caaaa

/* private_store::CPrivateStoreMgr::HandleError(CUser*, int, int, int) */

undefined4 __thiscall
private_store::CPrivateStoreMgr::HandleError
          (CPrivateStoreMgr *this,CUser *param_1,int param_2,int param_3,int param_4)

{
  CPacketBufPrivate local_18 [12];
  
  CPacketBufPrivate::CPacketBufPrivate(local_18);
                    /* try { // try from 085caad8 to 085caaee has its CatchHandler @ 085cab08 */
  CPacketBufPrivate::MakeErrorReturnPacket(local_18,param_2,param_3,param_4);
  CUser::Send(param_1,(PacketGuard *)local_18);
  CPacketBufPrivate::~CPacketBufPrivate(local_18);
  return 0;
}
```

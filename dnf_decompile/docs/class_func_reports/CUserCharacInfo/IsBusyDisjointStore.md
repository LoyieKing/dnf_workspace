# IsBusyDisjointStore

`_ZN15CUserCharacInfo19IsBusyDisjointStoreEv`

`CUserCharacInfo::IsBusyDisjointStore()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0864781e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864781e  _ZN15CUserCharacInfo19IsBusyDisjointStoreEv
#           CUserCharacInfo::IsBusyDisjointStore()
# range [0x0864781e, 0x08647863]
0864781e +0x00:  push   %ebp
0864781f +0x01:  mov    %esp,%ebp
08647821 +0x03:  sub    $0x18,%esp
08647824 +0x06:  mov    0x8(%ebp),%eax
08647827 +0x09:  mov    %eax,(%esp)
0864782a +0x0c:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
0864782f +0x11:  test   %eax,%eax
08647831 +0x13:  setne  %al
08647834 +0x16:  test   %al,%al
08647836 +0x18:  je     0864785c <+0x3e>
08647838 +0x1a:  mov    0x8(%ebp),%eax
0864783b +0x1d:  mov    %eax,(%esp)
0864783e +0x20:  call   0822f8d4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f7e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f7e
08647843 +0x25:  mov    %eax,(%esp)
08647846 +0x28:  call   08234796 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e40>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e40
0864784b +0x2d:  cmp    $0x3,%eax
0864784e +0x30:  sete   %al
08647851 +0x33:  test   %al,%al
08647853 +0x35:  je     0864785c <+0x3e>
08647855 +0x37:  mov    $0x1,%eax
0864785a +0x3c:  jmp    08647861 <+0x43>
0864785c +0x3e:  mov    $0x0,%eax
08647861 +0x43:  leave
08647862 +0x44:  ret
08647863 +0x45:  nop
```

## 反编译 C

```c
// CUserCharacInfo::IsBusyDisjointStore @ 0x864781e

/* CUserCharacInfo::IsBusyDisjointStore() */

undefined4 __thiscall CUserCharacInfo::IsBusyDisjointStore(CUserCharacInfo *this)

{
  int iVar1;
  CExpertJob *this_00;
  
  iVar1 = GetCurCharacExpertJob(this);
  if (iVar1 != 0) {
    this_00 = (CExpertJob *)GetCurCharacExpertJob(this);
    iVar1 = expert_job::CExpertJob::GetType(this_00);
    if (iVar1 == 3) {
      return 1;
    }
  }
  return 0;
}
```

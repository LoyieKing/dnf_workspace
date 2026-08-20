# regist_quick_party

`_ZN10QuickParty24CQuickPartySystemManager18regist_quick_partyERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEiP6CPartyi`

`QuickParty::CQuickPartySystemManager::regist_quick_party(QuickParty::STQuickPartyPoolMap_Key const&, QuickParty::STQuickPartyPoolMap_Data&, int, CParty*, int)`

| 类 | 地址 |
|---|---|
| `QuickParty::CQuickPartySystemManager` | `0x0826adb6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826adb6  _ZN10QuickParty24CQuickPartySystemManager18regist_quick_partyERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEiP6CPartyi
#           QuickParty::CQuickPartySystemManager::regist_quick_party(QuickParty::STQuickPartyPoolMap_Key const&, QuickParty::STQuickPartyPoolMap_Data&, int, CParty*, int)
# range [0x0826adb6, 0x0826ae63]
0826adb6 +0x00:  push   %ebp
0826adb7 +0x01:  mov    %esp,%ebp
0826adb9 +0x03:  sub    $0x38,%esp
0826adbc +0x06:  cmpl   $0x0,0x18(%ebp)
0826adc0 +0x0a:  jne    0826adcc <+0x16>
0826adc2 +0x0c:  mov    $0x0,%eax
0826adc7 +0x11:  jmp    0826ae62 <+0xac>
0826adcc +0x16:  movl   $0x0,-0x10(%ebp)
0826add3 +0x1d:  mov    0x18(%ebp),%eax
0826add6 +0x20:  mov    %eax,(%esp)
0826add9 +0x23:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
0826adde +0x28:  mov    0x1c(%ebp),%edx
0826ade1 +0x2b:  mov    %edx,0x14(%esp)
0826ade5 +0x2f:  mov    %eax,0x10(%esp)
0826ade9 +0x33:  mov    0x14(%ebp),%eax
0826adec +0x36:  mov    %eax,0xc(%esp)
0826adf0 +0x3a:  mov    0x10(%ebp),%eax
0826adf3 +0x3d:  mov    %eax,0x8(%esp)
0826adf7 +0x41:  lea    -0x10(%ebp),%eax
0826adfa +0x44:  mov    %eax,0x4(%esp)
0826adfe +0x48:  mov    0x8(%ebp),%eax
0826ae01 +0x4b:  mov    %eax,(%esp)
0826ae04 +0x4e:  call   0826ae64 <_ZN10QuickParty24CQuickPartySystemManager23pop_quick_party_in_poolERiRNS_24STQuickPartyPoolMap_DataEiii>  ; QuickParty::CQuickPartySystemManager::pop_quick_party_in_pool(int&, QuickParty::STQuickPartyPoolMap_Data&, int, int, int)
0826ae09 +0x53:  mov    %eax,-0xc(%ebp)
0826ae0c +0x56:  cmpl   $0x0,-0xc(%ebp)
0826ae10 +0x5a:  jne    0826ae19 <+0x63>
0826ae12 +0x5c:  mov    $0x0,%eax
0826ae17 +0x61:  jmp    0826ae62 <+0xac>
0826ae19 +0x63:  mov    -0x10(%ebp),%eax
0826ae1c +0x66:  movl   $0x1,0x18(%esp)
0826ae24 +0x6e:  mov    -0xc(%ebp),%edx
0826ae27 +0x71:  mov    %edx,0x14(%esp)
0826ae2b +0x75:  mov    %eax,0x10(%esp)
0826ae2f +0x79:  mov    0x18(%ebp),%eax
0826ae32 +0x7c:  mov    %eax,0xc(%esp)
0826ae36 +0x80:  mov    0x10(%ebp),%eax
0826ae39 +0x83:  mov    %eax,0x8(%esp)
0826ae3d +0x87:  mov    0xc(%ebp),%eax
0826ae40 +0x8a:  mov    %eax,0x4(%esp)
0826ae44 +0x8e:  mov    0x8(%ebp),%eax
0826ae47 +0x91:  mov    %eax,(%esp)
0826ae4a +0x94:  call   0826afb4 <_ZN10QuickParty24CQuickPartySystemManager24push_quick_party_in_poolERKNS_23STQuickPartyPoolMap_KeyERNS_24STQuickPartyPoolMap_DataEP6CPartyiPNS_11CQuickPartyEb>  ; QuickParty::CQuickPartySystemManager::push_quick_party_in_pool(QuickParty::STQuickPartyPoolMap_Key const&, QuickParty::STQuickPartyPoolMap_Data&, CParty*, int, QuickParty::CQuickParty*, bool)
0826ae4f +0x99:  xor    $0x1,%eax
0826ae52 +0x9c:  test   %al,%al
0826ae54 +0x9e:  je     0826ae5d <+0xa7>
0826ae56 +0xa0:  mov    $0x0,%eax
0826ae5b +0xa5:  jmp    0826ae62 <+0xac>
0826ae5d +0xa7:  mov    $0x1,%eax
0826ae62 +0xac:  leave
0826ae63 +0xad:  ret
```

## 反编译 C

```c
// QuickParty::CQuickPartySystemManager::regist_quick_party @ 0x826adb6

/* QuickParty::CQuickPartySystemManager::regist_quick_party(QuickParty::STQuickPartyPoolMap_Key
   const&, QuickParty::STQuickPartyPoolMap_Data&, int, CParty*, int) */

undefined4 __thiscall
QuickParty::CQuickPartySystemManager::regist_quick_party
          (CQuickPartySystemManager *this,STQuickPartyPoolMap_Key *param_1,
          STQuickPartyPoolMap_Data *param_2,int param_3,CParty *param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_14;
  CQuickParty *local_10;
  
  if (param_4 == (CParty *)0x0) {
    uVar2 = 0;
  }
  else {
    local_14 = 0;
    iVar3 = CParty::GetPartyIndex(param_4);
    local_10 = (CQuickParty *)pop_quick_party_in_pool(this,&local_14,param_2,param_3,iVar3,param_5);
    if (local_10 == (CQuickParty *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = push_quick_party_in_pool(this,param_1,param_2,param_4,local_14,local_10,true);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
```

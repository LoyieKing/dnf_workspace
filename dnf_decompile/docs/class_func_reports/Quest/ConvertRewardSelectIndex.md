# ConvertRewardSelectIndex

`_ZN5Quest24ConvertRewardSelectIndexEPK5CUseri`

`Quest::ConvertRewardSelectIndex(CUser const*, int)`

| 类 | 地址 |
|---|---|
| `Quest` | `0x083537c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083537c2  _ZN5Quest24ConvertRewardSelectIndexEPK5CUseri
#           Quest::ConvertRewardSelectIndex(CUser const*, int)
# range [0x083537c2, 0x083538ef]
083537c2 +0x000:  push   %ebp
083537c3 +0x001:  mov    %esp,%ebp
083537c5 +0x003:  push   %ebx
083537c6 +0x004:  sub    $0x24,%esp
083537c9 +0x007:  cmpl   $0x0,0xc(%ebp)
083537cd +0x00b:  jne    083537d9 <+0x17>
083537cf +0x00d:  mov    $0xffffffff,%eax
083537d4 +0x012:  jmp    083538e9 <+0x127>
083537d9 +0x017:  cmpl   $0xffffffff,0x10(%ebp)
083537dd +0x01b:  je     083537e8 <+0x26>
083537df +0x01d:  cmpl   $0xffff,0x10(%ebp)
083537e6 +0x024:  jne    083537f2 <+0x30>
083537e8 +0x026:  mov    $0xffffffff,%eax
083537ed +0x02b:  jmp    083538e9 <+0x127>
083537f2 +0x030:  movl   $0x0,-0x10(%ebp)
083537f9 +0x037:  movl   $0x0,-0xc(%ebp)
08353800 +0x03e:  movl   $0x0,-0x10(%ebp)
08353807 +0x045:  jmp    083538c5 <+0x103>
0835380c +0x04a:  mov    -0x10(%ebp),%eax
0835380f +0x04d:  mov    0x8(%ebp),%edx
08353812 +0x050:  add    $0xd0,%edx
08353818 +0x056:  mov    %eax,0x4(%esp)
0835381c +0x05a:  mov    %edx,(%esp)
0835381f +0x05d:  call   083910c6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20b66>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20b66
08353824 +0x062:  mov    0x8(%eax),%eax
08353827 +0x065:  cmp    $0xb,%eax
0835382a +0x068:  je     083538a5 <+0xe3>
0835382c +0x06a:  mov    -0x10(%ebp),%eax
0835382f +0x06d:  mov    0x8(%ebp),%edx
08353832 +0x070:  add    $0xd0,%edx
08353838 +0x076:  mov    %eax,0x4(%esp)
0835383c +0x07a:  mov    %edx,(%esp)
0835383f +0x07d:  call   083910c6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20b66>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20b66
08353844 +0x082:  mov    0x8(%eax),%eax
08353847 +0x085:  mov    %eax,%ebx
08353849 +0x087:  mov    0xc(%ebp),%eax
0835384c +0x08a:  mov    %eax,(%esp)
0835384f +0x08d:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08353854 +0x092:  cmp    %eax,%ebx
08353856 +0x094:  jne    083538ac <+0xea>
08353858 +0x096:  mov    -0x10(%ebp),%eax
0835385b +0x099:  mov    0x8(%ebp),%edx
0835385e +0x09c:  add    $0xd0,%edx
08353864 +0x0a2:  mov    %eax,0x4(%esp)
08353868 +0x0a6:  mov    %edx,(%esp)
0835386b +0x0a9:  call   083910c6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20b66>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20b66
08353870 +0x0ae:  mov    0xc(%eax),%eax
08353873 +0x0b1:  cmp    $0xffffffff,%eax
08353876 +0x0b4:  je     083538a5 <+0xe3>
08353878 +0x0b6:  mov    -0x10(%ebp),%eax
0835387b +0x0b9:  mov    0x8(%ebp),%edx
0835387e +0x0bc:  add    $0xd0,%edx
08353884 +0x0c2:  mov    %eax,0x4(%esp)
08353888 +0x0c6:  mov    %edx,(%esp)
0835388b +0x0c9:  call   083910c6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20b66>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20b66
08353890 +0x0ce:  mov    0xc(%eax),%ebx
08353893 +0x0d1:  mov    0xc(%ebp),%eax
08353896 +0x0d4:  mov    %eax,(%esp)
08353899 +0x0d7:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0835389e +0x0dc:  movsbl %al,%eax
083538a1 +0x0df:  cmp    %eax,%ebx
083538a3 +0x0e1:  jne    083538ac <+0xea>
083538a5 +0x0e3:  mov    $0x1,%eax
083538aa +0x0e8:  jmp    083538b1 <+0xef>
083538ac +0x0ea:  mov    $0x0,%eax
083538b1 +0x0ef:  test   %al,%al
083538b3 +0x0f1:  je     083538c1 <+0xff>
083538b5 +0x0f3:  mov    0x10(%ebp),%eax
083538b8 +0x0f6:  cmp    -0xc(%ebp),%eax
083538bb +0x0f9:  je     083538e5 <+0x123>
083538bd +0x0fb:  addl   $0x1,-0xc(%ebp)
083538c1 +0x0ff:  addl   $0x1,-0x10(%ebp)
083538c5 +0x103:  mov    0x8(%ebp),%eax
083538c8 +0x106:  add    $0xd0,%eax
083538cd +0x10b:  mov    %eax,(%esp)
083538d0 +0x10e:  call   08390e40 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x208e0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x208e0
083538d5 +0x113:  cmp    -0x10(%ebp),%eax
083538d8 +0x116:  setg   %al
083538db +0x119:  test   %al,%al
083538dd +0x11b:  jne    0835380c <+0x4a>
083538e3 +0x121:  jmp    083538e6 <+0x124>
083538e5 +0x123:  nop
083538e6 +0x124:  mov    -0x10(%ebp),%eax
083538e9 +0x127:  add    $0x24,%esp
083538ec +0x12a:  pop    %ebx
083538ed +0x12b:  pop    %ebp
083538ee +0x12c:  ret
083538ef +0x12d:  nop
```

## 反编译 C

```c
// Quest::ConvertRewardSelectIndex @ 0x83537c2

/* Quest::ConvertRewardSelectIndex(CUser const*, int) */

uint __thiscall Quest::ConvertRewardSelectIndex(Quest *this,CUser *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    local_14 = 0xffffffff;
  }
  else if ((param_2 == -1) || (param_2 == 0xffff)) {
    local_14 = 0xffffffff;
  }
  else {
    local_10 = 0;
    for (local_14 = 0;
        iVar4 = std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::size
                          ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)(this + 0xd0)),
        (int)local_14 < iVar4; local_14 = local_14 + 1) {
      iVar4 = std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::operator[]
                        ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)(this + 0xd0),
                         local_14);
      if (*(int *)(iVar4 + 8) == 0xb) {
LAB_083538a5:
        bVar1 = true;
      }
      else {
        iVar4 = std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::operator[]
                          ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)(this + 0xd0),
                           local_14);
        iVar4 = *(int *)(iVar4 + 8);
        iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
        if (iVar4 == iVar3) {
          iVar4 = std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::operator[]
                            ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)(this + 0xd0),
                             local_14);
          if (*(int *)(iVar4 + 0xc) != -1) {
            iVar4 = std::vector<RewardItemInfo,std::allocator<RewardItemInfo>>::operator[]
                              ((vector<RewardItemInfo,std::allocator<RewardItemInfo>> *)
                               (this + 0xd0),local_14);
            iVar4 = *(int *)(iVar4 + 0xc);
            cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
            if (iVar4 != cVar2) goto LAB_083538ac;
          }
          goto LAB_083538a5;
        }
LAB_083538ac:
        bVar1 = false;
      }
      if (bVar1) {
        if (param_2 == local_10) {
          return local_14;
        }
        local_10 = local_10 + 1;
      }
    }
  }
  return local_14;
}
```

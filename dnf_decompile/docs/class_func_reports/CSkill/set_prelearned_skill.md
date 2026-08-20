# set_prelearned_skill

`_ZN6CSkill20set_prelearned_skillEv`

`CSkill::set_prelearned_skill()`

| 类 | 地址 |
|---|---|
| `CSkill` | `0x08350024` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08350024  _ZN6CSkill20set_prelearned_skillEv
#           CSkill::set_prelearned_skill()
# range [0x08350024, 0x083500f1]
08350024 +0x00:  push   %ebp
08350025 +0x01:  mov    %esp,%ebp
08350027 +0x03:  push   %esi
08350028 +0x04:  push   %ebx
08350029 +0x05:  sub    $0x40,%esp
0835002c +0x08:  lea    -0x20(%ebp),%eax
0835002f +0x0b:  mov    %eax,(%esp)
08350032 +0x0e:  call   0838f486 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ef26>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ef26
08350037 +0x13:  mov    0x8(%ebp),%eax
0835003a +0x16:  add    $0x18,%eax
0835003d +0x19:  mov    %eax,(%esp)
08350040 +0x1c:  call   0838f494 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ef34>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ef34
08350045 +0x21:  mov    %eax,-0x18(%ebp)
08350048 +0x24:  mov    0x8(%ebp),%eax
0835004b +0x27:  lea    0x18(%eax),%edx
0835004e +0x2a:  lea    -0x2c(%ebp),%eax
08350051 +0x2d:  mov    %edx,0x4(%esp)
08350055 +0x31:  mov    %eax,(%esp)
08350058 +0x34:  call   0838f4d8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ef78>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ef78
0835005d +0x39:  sub    $0x4,%esp
08350060 +0x3c:  mov    -0x2c(%ebp),%eax
08350063 +0x3f:  mov    %eax,-0x20(%ebp)
08350066 +0x42:  movl   $0x0,-0x10(%ebp)
0835006d +0x49:  jmp    083500db <+0xb7>
0835006f +0x4b:  lea    -0x20(%ebp),%eax
08350072 +0x4e:  mov    %eax,(%esp)
08350075 +0x51:  call   0838f4fe <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1ef9e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1ef9e
0835007a +0x56:  mov    %eax,-0xc(%ebp)
0835007d +0x59:  mov    -0xc(%ebp),%eax
08350080 +0x5c:  mov    (%eax),%esi
08350082 +0x5e:  mov    0x8(%ebp),%eax
08350085 +0x61:  mov    0x4(%eax),%ebx
08350088 +0x64:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0835008d +0x69:  mov    0x10(%eax),%eax
08350090 +0x6c:  mov    %esi,0x8(%esp)
08350094 +0x70:  mov    %ebx,0x4(%esp)
08350098 +0x74:  mov    %eax,(%esp)
0835009b +0x77:  call   08351b74 <_ZN10CSkillList10find_skillEii>  ; CSkillList::find_skill(int, int)
083500a0 +0x7c:  mov    %eax,-0x14(%ebp)
083500a3 +0x7f:  cmpl   $0x0,-0x14(%ebp)
083500a7 +0x83:  je     083500ba <+0x96>
083500a9 +0x85:  mov    -0x14(%ebp),%eax
083500ac +0x88:  mov    %eax,(%esp)
083500af +0x8b:  call   08374b96 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb62>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb62
083500b4 +0x90:  mov    -0xc(%ebp),%edx
083500b7 +0x93:  mov    %eax,0x8(%edx)
083500ba +0x96:  lea    -0x1c(%ebp),%eax
083500bd +0x99:  movl   $0x0,0x8(%esp)
083500c5 +0xa1:  lea    -0x20(%ebp),%edx
083500c8 +0xa4:  mov    %edx,0x4(%esp)
083500cc +0xa8:  mov    %eax,(%esp)
083500cf +0xab:  call   0838f50c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1efac>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1efac
083500d4 +0xb0:  sub    $0x4,%esp
083500d7 +0xb3:  addl   $0x1,-0x10(%ebp)
083500db +0xb7:  mov    -0x10(%ebp),%eax
083500de +0xba:  cmp    -0x18(%ebp),%eax
083500e1 +0xbd:  setl   %al
083500e4 +0xc0:  test   %al,%al
083500e6 +0xc2:  jne    0835006f <+0x4b>
083500e8 +0xc4:  lea    -0x8(%ebp),%esp
083500eb +0xc7:  add    $0x0,%esp
083500ee +0xca:  pop    %ebx
083500ef +0xcb:  pop    %esi
083500f0 +0xcc:  pop    %ebp
083500f1 +0xcd:  ret
```

## 反编译 C

```c
// CSkill::set_prelearned_skill @ 0x8350024

/* CSkill::set_prelearned_skill() */

void __thiscall CSkill::set_prelearned_skill(CSkill *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  _List_iterator<_pre_skill> local_24 [4];
  _List_iterator<_pre_skill> local_20 [4];
  int local_1c;
  CSkill *local_18;
  int local_14;
  int local_10;
  
  std::_List_iterator<_pre_skill>::_List_iterator(local_24);
  local_1c = std::list<_pre_skill,std::allocator<_pre_skill>>::size();
  std::list<_pre_skill,std::allocator<_pre_skill>>::begin();
  for (local_14 = 0; local_14 < local_1c; local_14 = local_14 + 1) {
    local_10 = std::_List_iterator<_pre_skill>::operator*(local_24);
    iVar1 = *(int *)(this + 4);
    iVar2 = G_CDataManager();
    local_18 = (CSkill *)CSkillList::find_skill(*(int *)(iVar2 + 0x10),iVar1);
    if (local_18 != (CSkill *)0x0) {
      uVar3 = get_group(local_18);
      *(undefined4 *)(local_10 + 8) = uVar3;
    }
    std::_List_iterator<_pre_skill>::operator++(local_20,(int)local_24);
  }
  return;
}
```

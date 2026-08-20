# getComboSkill

`_ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData`

`DB_LoadEtc::getComboSkill(MySQL*, unsigned int, int, comoboSkillData*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x0844a704` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844a704  _ZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillData
#           DB_LoadEtc::getComboSkill(MySQL*, unsigned int, int, comoboSkillData*)
# range [0x0844a704, 0x0844a8e9]
0844a704 +0x000:  push   %ebp
0844a705 +0x001:  mov    %esp,%ebp
0844a707 +0x003:  sub    $0x58,%esp
0844a70a +0x006:  cmpl   $0x0,0xc(%ebp)
0844a70e +0x00a:  je     0844a716 <+0x12>
0844a710 +0x00c:  cmpl   $0x0,0x18(%ebp)
0844a714 +0x010:  jne    0844a720 <+0x1c>
0844a716 +0x012:  mov    $0x0,%eax
0844a71b +0x017:  jmp    0844a8e7 <+0x1e3>
0844a720 +0x01c:  movl   $0x0,-0x14(%ebp)
0844a727 +0x023:  jmp    0844a8c0 <+0x1bc>
0844a72c +0x028:  mov    0xc(%ebp),%eax
0844a72f +0x02b:  mov    %eax,(%esp)
0844a732 +0x02e:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0844a737 +0x033:  xor    $0x1,%eax
0844a73a +0x036:  test   %al,%al
0844a73c +0x038:  je     0844a785 <+0x81>
0844a73e +0x03a:  movl   $0x5,0xc(%esp)
0844a746 +0x042:  movl   $0xbb01,0x8(%esp)
0844a74e +0x04a:  movl   $&_ZZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillDataE19__PRETTY_FUNCTION__,0x4(%esp)
0844a756 +0x052:  lea    -0x44(%ebp),%eax
0844a759 +0x055:  mov    %eax,(%esp)
0844a75c +0x058:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844a761 +0x05d:  mov    0x10(%ebp),%eax
0844a764 +0x060:  mov    %eax,0x8(%esp)
0844a768 +0x064:  movl   $"DB_LoadEtc::getComboSkill fetch, exec() ERROR charac_no=%u",0x4(%esp)
0844a770 +0x06c:  lea    -0x44(%ebp),%eax
0844a773 +0x06f:  mov    %eax,(%esp)
0844a776 +0x072:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844a77b +0x077:  mov    $0x0,%eax
0844a780 +0x07c:  jmp    0844a8e7 <+0x1e3>
0844a785 +0x081:  movl   $0x0,-0x10(%ebp)
0844a78c +0x088:  mov    -0x14(%ebp),%eax
0844a78f +0x08b:  add    %eax,%eax
0844a791 +0x08d:  lea    0x0(,%eax,8),%edx
0844a798 +0x094:  mov    %edx,%ecx
0844a79a +0x096:  sub    %eax,%ecx
0844a79c +0x098:  mov    %ecx,%eax
0844a79e +0x09a:  add    0x18(%ebp),%eax
0844a7a1 +0x09d:  mov    %eax,%edx
0844a7a3 +0x09f:  mov    -0x10(%ebp),%eax
0844a7a6 +0x0a2:  addl   $0x1,-0x10(%ebp)
0844a7aa +0x0a6:  mov    %edx,0x8(%esp)
0844a7ae +0x0aa:  mov    %eax,0x4(%esp)
0844a7b2 +0x0ae:  mov    0xc(%ebp),%eax
0844a7b5 +0x0b1:  mov    %eax,(%esp)
0844a7b8 +0x0b4:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0844a7bd +0x0b9:  xor    $0x1,%eax
0844a7c0 +0x0bc:  test   %al,%al
0844a7c2 +0x0be:  je     0844a812 <+0x10e>
0844a7c4 +0x0c0:  movl   $0x5,0xc(%esp)
0844a7cc +0x0c8:  movl   $0xbb0a,0x8(%esp)
0844a7d4 +0x0d0:  movl   $&_ZZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillDataE19__PRETTY_FUNCTION__,0x4(%esp)
0844a7dc +0x0d8:  lea    -0x34(%ebp),%eax
0844a7df +0x0db:  mov    %eax,(%esp)
0844a7e2 +0x0de:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844a7e7 +0x0e3:  mov    0x10(%ebp),%eax
0844a7ea +0x0e6:  mov    %eax,0xc(%esp)
0844a7ee +0x0ea:  mov    -0x10(%ebp),%eax
0844a7f1 +0x0ed:  mov    %eax,0x8(%esp)
0844a7f5 +0x0f1:  movl   $"DB_LoadEtc::getComboSkill get(%d) ERROR charac_no=%u",0x4(%esp)
0844a7fd +0x0f9:  lea    -0x34(%ebp),%eax
0844a800 +0x0fc:  mov    %eax,(%esp)
0844a803 +0x0ff:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844a808 +0x104:  mov    $0x0,%eax
0844a80d +0x109:  jmp    0844a8e7 <+0x1e3>
0844a812 +0x10e:  movl   $0x0,-0xc(%ebp)
0844a819 +0x115:  jmp    0844a8ad <+0x1a9>
0844a81e +0x11a:  mov    -0x14(%ebp),%eax
0844a821 +0x11d:  add    %eax,%eax
0844a823 +0x11f:  lea    0x0(,%eax,8),%edx
0844a82a +0x126:  mov    %edx,%ecx
0844a82c +0x128:  sub    %eax,%ecx
0844a82e +0x12a:  mov    %ecx,%eax
0844a830 +0x12c:  add    0x18(%ebp),%eax
0844a833 +0x12f:  mov    -0xc(%ebp),%edx
0844a836 +0x132:  add    %edx,%edx
0844a838 +0x134:  add    %edx,%eax
0844a83a +0x136:  lea    0x2(%eax),%edx
0844a83d +0x139:  mov    -0x10(%ebp),%eax
0844a840 +0x13c:  addl   $0x1,-0x10(%ebp)
0844a844 +0x140:  mov    %edx,0x8(%esp)
0844a848 +0x144:  mov    %eax,0x4(%esp)
0844a84c +0x148:  mov    0xc(%ebp),%eax
0844a84f +0x14b:  mov    %eax,(%esp)
0844a852 +0x14e:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0844a857 +0x153:  xor    $0x1,%eax
0844a85a +0x156:  test   %al,%al
0844a85c +0x158:  je     0844a8a9 <+0x1a5>
0844a85e +0x15a:  movl   $0x5,0xc(%esp)
0844a866 +0x162:  movl   $0xbb14,0x8(%esp)
0844a86e +0x16a:  movl   $&_ZZN10DB_LoadEtc13getComboSkillEP5MySQLjiP15comoboSkillDataE19__PRETTY_FUNCTION__,0x4(%esp)
0844a876 +0x172:  lea    -0x24(%ebp),%eax
0844a879 +0x175:  mov    %eax,(%esp)
0844a87c +0x178:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844a881 +0x17d:  mov    0x10(%ebp),%eax
0844a884 +0x180:  mov    %eax,0xc(%esp)
0844a888 +0x184:  mov    -0x10(%ebp),%eax
0844a88b +0x187:  mov    %eax,0x8(%esp)
0844a88f +0x18b:  movl   $"DB_LoadEtc::getComboSkill get(%d) ERROR charac_no=%u",0x4(%esp)
0844a897 +0x193:  lea    -0x24(%ebp),%eax
0844a89a +0x196:  mov    %eax,(%esp)
0844a89d +0x199:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844a8a2 +0x19e:  mov    $0x0,%eax
0844a8a7 +0x1a3:  jmp    0844a8e7 <+0x1e3>
0844a8a9 +0x1a5:  addl   $0x1,-0xc(%ebp)
0844a8ad +0x1a9:  cmpl   $0x5,-0xc(%ebp)
0844a8b1 +0x1ad:  setle  %al
0844a8b4 +0x1b0:  test   %al,%al
0844a8b6 +0x1b2:  jne    0844a81e <+0x11a>
0844a8bc +0x1b8:  addl   $0x1,-0x14(%ebp)
0844a8c0 +0x1bc:  mov    -0x14(%ebp),%eax
0844a8c3 +0x1bf:  cmp    0x14(%ebp),%eax
0844a8c6 +0x1c2:  jge    0844a8d5 <+0x1d1>
0844a8c8 +0x1c4:  cmpl   $0x5,-0x14(%ebp)
0844a8cc +0x1c8:  jg     0844a8d5 <+0x1d1>
0844a8ce +0x1ca:  mov    $0x1,%eax
0844a8d3 +0x1cf:  jmp    0844a8da <+0x1d6>
0844a8d5 +0x1d1:  mov    $0x0,%eax
0844a8da +0x1d6:  test   %al,%al
0844a8dc +0x1d8:  jne    0844a72c <+0x28>
0844a8e2 +0x1de:  mov    $0x1,%eax
0844a8e7 +0x1e3:  leave
0844a8e8 +0x1e4:  ret
0844a8e9 +0x1e5:  nop
```

## 反编译 C

```c
// DB_LoadEtc::getComboSkill @ 0x844a704

/* DB_LoadEtc::getComboSkill(MySQL*, unsigned int, int, comoboSkillData*) */

undefined4 __thiscall
DB_LoadEtc::getComboSkill
          (DB_LoadEtc *this,MySQL *param_1,uint param_2,int param_3,comoboSkillData *param_4)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  int local_18;
  int local_14;
  int local_10;
  
  if ((param_1 != (MySQL *)0x0) && (param_4 != (comoboSkillData *)0x0)) {
    local_18 = 0;
    while( true ) {
      if ((local_18 < param_3) && (local_18 < 6)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        return 1;
      }
      cVar3 = MySQL::fetch(param_1);
      if (cVar3 != '\x01') {
        cMyTrace::cMyTrace(local_48,
                           "bool DB_LoadEtc::getComboSkill(MySQL*, unsigned int, int, comoboSkillData*)"
                           ,0xbb01,5);
        cMyTrace::operator()
                  (local_48,"DB_LoadEtc::getComboSkill fetch, exec() ERROR charac_no=%u",param_2);
        return 0;
      }
      local_14 = 1;
      cVar3 = MySQL::get_short(param_1,0,(short *)(param_4 + local_18 * 0xe));
      if (cVar3 != '\x01') break;
      for (local_10 = 0; iVar2 = local_14, local_10 < 6; local_10 = local_10 + 1) {
        local_14 = local_14 + 1;
        cVar3 = MySQL::get_short(param_1,iVar2,
                                 (short *)(param_4 + local_10 * 2 + local_18 * 0xe + 2));
        if (cVar3 != '\x01') {
          cMyTrace::cMyTrace(local_28,
                             "bool DB_LoadEtc::getComboSkill(MySQL*, unsigned int, int, comoboSkillData*)"
                             ,0xbb14,5);
          cMyTrace::operator()
                    (local_28,"DB_LoadEtc::getComboSkill get(%d) ERROR charac_no=%u",local_14,
                     param_2);
          return 0;
        }
      }
      local_18 = local_18 + 1;
    }
    cMyTrace::cMyTrace(local_38,
                       "bool DB_LoadEtc::getComboSkill(MySQL*, unsigned int, int, comoboSkillData*)"
                       ,0xbb0a,5);
    cMyTrace::operator()
              (local_38,"DB_LoadEtc::getComboSkill get(%d) ERROR charac_no=%u",local_14,param_2);
  }
  return 0;
}
```

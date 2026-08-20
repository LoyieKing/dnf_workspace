# CompleteCardSelect

`_ZN6CParty18CompleteCardSelectEv`

`CParty::CompleteCardSelect()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b4786` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b4786  _ZN6CParty18CompleteCardSelectEv
#           CParty::CompleteCardSelect()
# range [0x085b4786, 0x085b489b]
085b4786 +0x000:  push   %ebp
085b4787 +0x001:  mov    %esp,%ebp
085b4789 +0x003:  sub    $0x38,%esp
085b478c +0x006:  movl   $0x0,-0x10(%ebp)
085b4793 +0x00d:  jmp    085b488b <+0x105>
085b4798 +0x012:  mov    -0x10(%ebp),%eax
085b479b +0x015:  mov    0x8(%ebp),%edx
085b479e +0x018:  movzbl 0x204(%edx,%eax,1),%eax
085b47a6 +0x020:  cmp    $0xff,%al
085b47a8 +0x022:  jne    085b4887 <+0x101>
085b47ae +0x028:  movl   $0x0,-0xc(%ebp)
085b47b5 +0x02f:  jmp    085b4875 <+0xef>
085b47ba +0x034:  mov    -0xc(%ebp),%eax
085b47bd +0x037:  mov    %eax,0x4(%esp)
085b47c1 +0x03b:  mov    0x8(%ebp),%eax
085b47c4 +0x03e:  mov    %eax,(%esp)
085b47c7 +0x041:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b47cc +0x046:  xor    $0x1,%eax
085b47cf +0x049:  test   %al,%al
085b47d1 +0x04b:  jne    085b4870 <+0xea>
085b47d7 +0x051:  mov    -0xc(%ebp),%eax
085b47da +0x054:  movsbl %al,%eax
085b47dd +0x057:  movl   $0x0,0x8(%esp)
085b47e5 +0x05f:  mov    %eax,0x4(%esp)
085b47e9 +0x063:  mov    0x8(%ebp),%eax
085b47ec +0x066:  mov    %eax,(%esp)
085b47ef +0x069:  call   085b4734 <_ZN6CParty12IsSelectCardEc22eClearRewardCardType_t>  ; CParty::IsSelectCard(char, eClearRewardCardType_t)
085b47f4 +0x06e:  xor    $0x1,%eax
085b47f7 +0x071:  test   %al,%al
085b47f9 +0x073:  je     085b4871 <+0xeb>
085b47fb +0x075:  mov    -0x10(%ebp),%eax
085b47fe +0x078:  mov    -0xc(%ebp),%edx
085b4801 +0x07b:  mov    %edx,%ecx
085b4803 +0x07d:  mov    0x8(%ebp),%edx
085b4806 +0x080:  mov    %cl,0x204(%edx,%eax,1)
085b480d +0x087:  mov    -0x10(%ebp),%eax
085b4810 +0x08a:  mov    0x8(%ebp),%edx
085b4813 +0x08d:  movzbl 0x204(%edx,%eax,1),%eax
085b481b +0x095:  cmp    $0xff,%al
085b481d +0x097:  jne    085b4886 <+0x100>
085b481f +0x099:  mov    -0x10(%ebp),%eax
085b4822 +0x09c:  mov    0x8(%ebp),%edx
085b4825 +0x09f:  movzbl 0x204(%edx,%eax,1),%eax
085b482d +0x0a7:  movsbl %al,%eax
085b4830 +0x0aa:  mov    -0xc(%ebp),%edx
085b4833 +0x0ad:  mov    %edx,0x1c(%esp)
085b4837 +0x0b1:  mov    -0x10(%ebp),%edx
085b483a +0x0b4:  mov    %edx,0x18(%esp)
085b483e +0x0b8:  mov    %eax,0x14(%esp)
085b4842 +0x0bc:  movl   $"INIT_CARD_NUM != dungeon_reward_card_[i]===>> dungeon_reward_card_[i] = %d, i = %d, z = %d",0x10(%esp)
085b484a +0x0c4:  movl   $0x36f8,0xc(%esp)
085b4852 +0x0cc:  movl   $&_ZZN6CParty18CompleteCardSelectEvE19__PRETTY_FUNCTION__,0x8(%esp)
085b485a +0x0d4:  movl   $"party.cpp",0x4(%esp)
085b4862 +0x0dc:  movl   $0x1,(%esp)
085b4869 +0x0e3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085b486e +0x0e8:  jmp    085b4887 <+0x101>
085b4870 +0x0ea:  nop
085b4871 +0x0eb:  addl   $0x1,-0xc(%ebp)
085b4875 +0x0ef:  cmpl   $0x3,-0xc(%ebp)
085b4879 +0x0f3:  setle  %al
085b487c +0x0f6:  test   %al,%al
085b487e +0x0f8:  jne    085b47ba <+0x34>
085b4884 +0x0fe:  jmp    085b4887 <+0x101>
085b4886 +0x100:  nop
085b4887 +0x101:  addl   $0x1,-0x10(%ebp)
085b488b +0x105:  cmpl   $0x3,-0x10(%ebp)
085b488f +0x109:  setle  %al
085b4892 +0x10c:  test   %al,%al
085b4894 +0x10e:  jne    085b4798 <+0x12>
085b489a +0x114:  leave
085b489b +0x115:  ret
```

## 反编译 C

```c
// CParty::CompleteCardSelect @ 0x85b4786

/* CParty::CompleteCardSelect() */

void __thiscall CParty::CompleteCardSelect(CParty *this)

{
  char cVar1;
  int local_14;
  int local_10;
  
  local_14 = 0;
  do {
    if (3 < local_14) {
      return;
    }
    if (this[local_14 + 0x204] == (CParty)0xff) {
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        cVar1 = _checkValidUser(this,local_10);
        if (cVar1 == '\x01') {
          cVar1 = IsSelectCard(this,(int)(char)SUB41(local_10,0),0);
          if (cVar1 != '\x01') {
            this[local_14 + 0x204] = SUB41(local_10,0);
            if (this[local_14 + 0x204] == (CParty)0xff) {
              LogManager::logFormat
                        (1,"party.cpp","void CParty::CompleteCardSelect()",0x36f8,
                         "INIT_CARD_NUM != dungeon_reward_card_[i]===>> dungeon_reward_card_[i] = %d, i = %d, z = %d"
                         ,(int)(char)this[local_14 + 0x204],local_14,local_10);
            }
            break;
          }
        }
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}
```

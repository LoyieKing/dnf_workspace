# GetCompetitionPeriodTerm

`_ZNK21CHARAC_LOAD_MERCENARY24GetCompetitionPeriodTermEPb`

`CHARAC_LOAD_MERCENARY::GetCompetitionPeriodTerm(bool*) const`

| 类 | 地址 |
|---|---|
| `CHARAC_LOAD_MERCENARY` | `0x081b2f32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b2f32  _ZNK21CHARAC_LOAD_MERCENARY24GetCompetitionPeriodTermEPb
#           CHARAC_LOAD_MERCENARY::GetCompetitionPeriodTerm(bool*) const
# range [0x081b2f32, 0x081b3045]
081b2f32 +0x000:  push   %ebp
081b2f33 +0x001:  mov    %esp,%ebp
081b2f35 +0x003:  push   %ebx
081b2f36 +0x004:  sub    $0x34,%esp
081b2f39 +0x007:  mov    0x8(%ebp),%eax
081b2f3c +0x00a:  movzbl 0x31(%eax),%eax
081b2f40 +0x00e:  movsbl %al,%eax
081b2f43 +0x011:  mov    %eax,0x4(%esp)
081b2f47 +0x015:  mov    0x8(%ebp),%eax
081b2f4a +0x018:  mov    %eax,(%esp)
081b2f4d +0x01b:  call   081b2bc4 <_ZNK21CHARAC_LOAD_MERCENARY27CheckCompetitionPeriodIndexEc>  ; CHARAC_LOAD_MERCENARY::CheckCompetitionPeriodIndex(char) const
081b2f52 +0x020:  xor    $0x1,%eax
081b2f55 +0x023:  test   %al,%al
081b2f57 +0x025:  je     081b2f63 <+0x31>
081b2f59 +0x027:  mov    $0x0,%eax
081b2f5e +0x02c:  jmp    081b3040 <+0x10e>
081b2f63 +0x031:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b2f68 +0x036:  add    $0xa8f0,%eax
081b2f6d +0x03b:  mov    %eax,-0x10(%ebp)
081b2f70 +0x03e:  mov    -0x10(%ebp),%eax
081b2f73 +0x041:  mov    %eax,(%esp)
081b2f76 +0x044:  call   081b4868 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0xdc>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0xdc
081b2f7b +0x049:  test   %al,%al
081b2f7d +0x04b:  jne    081b2f97 <+0x65>
081b2f7f +0x04d:  mov    -0x10(%ebp),%eax
081b2f82 +0x050:  mov    %eax,(%esp)
081b2f85 +0x053:  call   081b48ac <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x120>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x120
081b2f8a +0x058:  mov    %eax,%edx
081b2f8c +0x05a:  mov    0x8(%ebp),%eax
081b2f8f +0x05d:  movzbl 0x31(%eax),%eax
081b2f93 +0x061:  cmp    %al,%dl
081b2f95 +0x063:  jge    081b2f9e <+0x6c>
081b2f97 +0x065:  mov    $0x1,%eax
081b2f9c +0x06a:  jmp    081b2fa3 <+0x71>
081b2f9e +0x06c:  mov    $0x0,%eax
081b2fa3 +0x071:  test   %al,%al
081b2fa5 +0x073:  je     081b2fb1 <+0x7f>
081b2fa7 +0x075:  mov    $0x0,%eax
081b2fac +0x07a:  jmp    081b3040 <+0x10e>
081b2fb1 +0x07f:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081b2fb8 +0x086:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081b2fbd +0x08b:  mov    %eax,%edx
081b2fbf +0x08d:  mov    0x8(%ebp),%eax
081b2fc2 +0x090:  mov    0x28(%eax),%eax
081b2fc5 +0x093:  mov    %edx,%ecx
081b2fc7 +0x095:  sub    %eax,%ecx
081b2fc9 +0x097:  mov    %ecx,%eax
081b2fcb +0x099:  mov    %eax,-0xc(%ebp)
081b2fce +0x09c:  mov    -0xc(%ebp),%ebx
081b2fd1 +0x09f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b2fd6 +0x0a4:  mov    0xa8dc(%eax),%eax
081b2fdc +0x0aa:  mov    %eax,-0x1c(%ebp)
081b2fdf +0x0ad:  mov    %ebx,%eax
081b2fe1 +0x0af:  mov    $0x0,%edx
081b2fe6 +0x0b4:  divl   -0x1c(%ebp)
081b2fe9 +0x0b7:  mov    %eax,-0xc(%ebp)
081b2fec +0x0ba:  mov    0x8(%ebp),%eax
081b2fef +0x0bd:  movzbl 0x31(%eax),%eax
081b2ff3 +0x0c1:  movsbl %al,%eax
081b2ff6 +0x0c4:  mov    %eax,0x4(%esp)
081b2ffa +0x0c8:  mov    -0x10(%ebp),%eax
081b2ffd +0x0cb:  mov    %eax,(%esp)
081b3000 +0x0ce:  call   081b48c8 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x13c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x13c
081b3005 +0x0d3:  mov    (%eax),%eax
081b3007 +0x0d5:  cmp    -0xc(%ebp),%eax
081b300a +0x0d8:  setg   %al
081b300d +0x0db:  test   %al,%al
081b300f +0x0dd:  je     081b301f <+0xed>
081b3011 +0x0df:  cmpl   $0x0,0xc(%ebp)
081b3015 +0x0e3:  je     081b303d <+0x10b>
081b3017 +0x0e5:  mov    0xc(%ebp),%eax
081b301a +0x0e8:  movb   $0x1,(%eax)
081b301d +0x0eb:  jmp    081b303d <+0x10b>
081b301f +0x0ed:  mov    0x8(%ebp),%eax
081b3022 +0x0f0:  movzbl 0x31(%eax),%eax
081b3026 +0x0f4:  movsbl %al,%eax
081b3029 +0x0f7:  mov    %eax,0x4(%esp)
081b302d +0x0fb:  mov    -0x10(%ebp),%eax
081b3030 +0x0fe:  mov    %eax,(%esp)
081b3033 +0x101:  call   081b48c8 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x13c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x13c
081b3038 +0x106:  mov    (%eax),%eax
081b303a +0x108:  mov    %eax,-0xc(%ebp)
081b303d +0x10b:  mov    -0xc(%ebp),%eax
081b3040 +0x10e:  add    $0x34,%esp
081b3043 +0x111:  pop    %ebx
081b3044 +0x112:  pop    %ebp
081b3045 +0x113:  ret
```

## 反编译 C

```c
// CHARAC_LOAD_MERCENARY::GetCompetitionPeriodTerm @ 0x81b2f32

/* CHARAC_LOAD_MERCENARY::GetCompetitionPeriodTerm(bool*) const */

uint __thiscall
CHARAC_LOAD_MERCENARY::GetCompetitionPeriodTerm(CHARAC_LOAD_MERCENARY *this,bool *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *this_00;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  
  cVar2 = CheckCompetitionPeriodIndex(this,(char)this[0x31]);
  if (cVar2 == '\x01') {
    iVar4 = G_CDataManager();
    this_00 = (vector<std::pair<int,float>,std::allocator<std::pair<int,float>>> *)(iVar4 + 0xa8f0);
    cVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::empty();
    if ((cVar2 == '\0') &&
       (cVar2 = std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::size
                          (this_00), (char)this[0x31] <= cVar2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = 0;
    }
    else {
      iVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      iVar4 = *(int *)(this + 0x28);
      iVar6 = G_CDataManager();
      uVar3 = (uint)(iVar5 - iVar4) / *(uint *)(iVar6 + 0xa8dc);
      piVar7 = (int *)std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                      operator[](this_00,(int)(char)this[0x31]);
      if ((int)uVar3 < *piVar7) {
        if (param_1 != (bool *)0x0) {
          *param_1 = true;
        }
      }
      else {
        puVar8 = (uint *)std::vector<std::pair<int,float>,std::allocator<std::pair<int,float>>>::
                         operator[](this_00,(int)(char)this[0x31]);
        uVar3 = *puVar8;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```

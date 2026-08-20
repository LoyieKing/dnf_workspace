# GetRandMazebyPartyCount

`_ZNK8CDungeon23GetRandMazebyPartyCountEi`

`CDungeon::GetRandMazebyPartyCount(int) const`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x0834d06c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834d06c  _ZNK8CDungeon23GetRandMazebyPartyCountEi
#           CDungeon::GetRandMazebyPartyCount(int) const
# range [0x0834d06c, 0x0834d21f]
0834d06c +0x000:  push   %ebp
0834d06d +0x001:  mov    %esp,%ebp
0834d06f +0x003:  push   %esi
0834d070 +0x004:  push   %ebx
0834d071 +0x005:  sub    $0x40,%esp
0834d074 +0x008:  mov    0x8(%ebp),%eax
0834d077 +0x00b:  add    $0x62c,%eax
0834d07c +0x010:  mov    %eax,(%esp)
0834d07f +0x013:  call   0838a192 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c32>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c32
0834d084 +0x018:  cmp    $0x1,%eax
0834d087 +0x01b:  sete   %al
0834d08a +0x01e:  test   %al,%al
0834d08c +0x020:  je     0834d0ad <+0x41>
0834d08e +0x022:  mov    0x8(%ebp),%eax
0834d091 +0x025:  add    $0x62c,%eax
0834d096 +0x02a:  movl   $0x0,0x4(%esp)
0834d09e +0x032:  mov    %eax,(%esp)
0834d0a1 +0x035:  call   0838a1b4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c54>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c54
0834d0a6 +0x03a:  mov    %eax,%ebx
0834d0a8 +0x03c:  jmp    0834d216 <+0x1aa>
0834d0ad +0x041:  lea    -0x24(%ebp),%eax
0834d0b0 +0x044:  mov    %eax,(%esp)
0834d0b3 +0x047:  call   0830f910 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x14f5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x14f5
0834d0b8 +0x04c:  movl   $0x0,-0x10(%ebp)
0834d0bf +0x053:  jmp    0834d10e <+0xa2>
0834d0c1 +0x055:  mov    0x8(%ebp),%eax
0834d0c4 +0x058:  lea    0x62c(%eax),%edx
0834d0ca +0x05e:  mov    -0x10(%ebp),%eax
0834d0cd +0x061:  mov    %eax,0x4(%esp)
0834d0d1 +0x065:  mov    %edx,(%esp)
0834d0d4 +0x068:  call   0838a1b4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c54>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c54
0834d0d9 +0x06d:  mov    %eax,-0xc(%ebp)
0834d0dc +0x070:  mov    -0xc(%ebp),%eax
0834d0df +0x073:  mov    0x68(%eax),%eax
0834d0e2 +0x076:  cmp    0xc(%ebp),%eax
0834d0e5 +0x079:  jg     0834d10a <+0x9e>
0834d0e7 +0x07b:  mov    -0xc(%ebp),%eax
0834d0ea +0x07e:  mov    0x6c(%eax),%eax
0834d0ed +0x081:  cmp    0xc(%ebp),%eax
0834d0f0 +0x084:  jl     0834d10a <+0x9e>
0834d0f2 +0x086:  mov    -0xc(%ebp),%eax
0834d0f5 +0x089:  mov    %eax,-0x18(%ebp)
0834d0f8 +0x08c:  lea    -0x18(%ebp),%eax
0834d0fb +0x08f:  mov    %eax,0x4(%esp)
0834d0ff +0x093:  lea    -0x24(%ebp),%eax
0834d102 +0x096:  mov    %eax,(%esp)
0834d105 +0x099:  call   0830fa18 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x15fd>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x15fd
0834d10a +0x09e:  addl   $0x1,-0x10(%ebp)
0834d10e +0x0a2:  mov    0x8(%ebp),%eax
0834d111 +0x0a5:  add    $0x62c,%eax
0834d116 +0x0aa:  mov    %eax,(%esp)
0834d119 +0x0ad:  call   0838a192 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c32>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c32
0834d11e +0x0b2:  cmp    -0x10(%ebp),%eax
0834d121 +0x0b5:  seta   %al
0834d124 +0x0b8:  test   %al,%al
0834d126 +0x0ba:  jne    0834d0c1 <+0x55>
0834d128 +0x0bc:  movl   $0x0,-0x14(%ebp)
0834d12f +0x0c3:  lea    -0x24(%ebp),%eax
0834d132 +0x0c6:  mov    %eax,(%esp)
0834d135 +0x0c9:  call   0838a54a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19fea>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19fea
0834d13a +0x0ce:  test   %al,%al
0834d13c +0x0d0:  je     0834d188 <+0x11c>
0834d13e +0x0d2:  call   0807dca0 <_init+0x598>
0834d143 +0x0d7:  mov    %eax,%ebx
0834d145 +0x0d9:  mov    0x8(%ebp),%eax
0834d148 +0x0dc:  add    $0x62c,%eax
0834d14d +0x0e1:  mov    %eax,(%esp)
0834d150 +0x0e4:  call   0838a192 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c32>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c32
0834d155 +0x0e9:  mov    %eax,-0x2c(%ebp)
0834d158 +0x0ec:  mov    %ebx,%eax
0834d15a +0x0ee:  mov    $0x0,%edx
0834d15f +0x0f3:  divl   -0x2c(%ebp)
0834d162 +0x0f6:  mov    %edx,%ecx
0834d164 +0x0f8:  mov    %ecx,%eax
0834d166 +0x0fa:  mov    %eax,-0x14(%ebp)
0834d169 +0x0fd:  mov    -0x14(%ebp),%eax
0834d16c +0x100:  mov    0x8(%ebp),%edx
0834d16f +0x103:  add    $0x62c,%edx
0834d175 +0x109:  mov    %eax,0x4(%esp)
0834d179 +0x10d:  mov    %edx,(%esp)
0834d17c +0x110:  call   0838a1b4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x19c54>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x19c54
0834d181 +0x115:  mov    %eax,%ebx
0834d183 +0x117:  jmp    0834d20b <+0x19f>
0834d188 +0x11c:  lea    -0x24(%ebp),%eax
0834d18b +0x11f:  mov    %eax,(%esp)
0834d18e +0x122:  call   0830fa42 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1627>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1627
0834d193 +0x127:  cmp    $0x1,%eax
0834d196 +0x12a:  sete   %al
0834d199 +0x12d:  test   %al,%al
0834d19b +0x12f:  je     0834d1b4 <+0x148>
0834d19d +0x131:  movl   $0x0,0x4(%esp)
0834d1a5 +0x139:  lea    -0x24(%ebp),%eax
0834d1a8 +0x13c:  mov    %eax,(%esp)
0834d1ab +0x13f:  call   0830fa5e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1643>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1643
0834d1b0 +0x144:  mov    (%eax),%ebx
0834d1b2 +0x146:  jmp    0834d20b <+0x19f>
0834d1b4 +0x148:  call   0807dca0 <_init+0x598>
0834d1b9 +0x14d:  mov    %eax,%ebx
0834d1bb +0x14f:  lea    -0x24(%ebp),%eax
0834d1be +0x152:  mov    %eax,(%esp)
0834d1c1 +0x155:  call   0830fa42 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1627>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1627
0834d1c6 +0x15a:  mov    %eax,-0x2c(%ebp)
0834d1c9 +0x15d:  mov    %ebx,%eax
0834d1cb +0x15f:  mov    $0x0,%edx
0834d1d0 +0x164:  divl   -0x2c(%ebp)
0834d1d3 +0x167:  mov    %edx,%ecx
0834d1d5 +0x169:  mov    %ecx,%eax
0834d1d7 +0x16b:  mov    %eax,-0x14(%ebp)
0834d1da +0x16e:  mov    -0x14(%ebp),%eax
0834d1dd +0x171:  mov    %eax,0x4(%esp)
0834d1e1 +0x175:  lea    -0x24(%ebp),%eax
0834d1e4 +0x178:  mov    %eax,(%esp)
0834d1e7 +0x17b:  call   0830fa5e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1643>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1643
0834d1ec +0x180:  mov    (%eax),%ebx
0834d1ee +0x182:  jmp    0834d20b <+0x19f>
0834d1f0 +0x184:  mov    %edx,%ebx
0834d1f2 +0x186:  mov    %eax,%esi
0834d1f4 +0x188:  lea    -0x24(%ebp),%eax
0834d1f7 +0x18b:  mov    %eax,(%esp)
0834d1fa +0x18e:  call   0830f924 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1509>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1509
0834d1ff +0x193:  mov    %esi,%eax
0834d201 +0x195:  mov    %ebx,%edx
0834d203 +0x197:  mov    %eax,(%esp)
0834d206 +0x19a:  call   08ae3750 <_Unwind_Resume>
0834d20b +0x19f:  lea    -0x24(%ebp),%eax
0834d20e +0x1a2:  mov    %eax,(%esp)
0834d211 +0x1a5:  call   0830f924 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1509>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1509
0834d216 +0x1aa:  mov    %ebx,%eax
0834d218 +0x1ac:  add    $0x40,%esp
0834d21b +0x1af:  pop    %ebx
0834d21c +0x1b0:  pop    %esi
0834d21d +0x1b1:  pop    %ebp
0834d21e +0x1b2:  ret
0834d21f +0x1b3:  nop
```

## 反编译 C

```c
// CDungeon::GetRandMazebyPartyCount @ 0x834d06c

/* CDungeon::GetRandMazebyPartyCount(int) const */

undefined4 __thiscall CDungeon::GetRandMazebyPartyCount(CDungeon *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  vector<MazeScript*,std::allocator<MazeScript*>> local_28 [12];
  MazeScript *local_1c;
  uint local_18;
  uint local_14;
  MazeScript *local_10;
  
  iVar2 = std::vector<MazeScript,std::allocator<MazeScript>>::size
                    ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c));
  if (iVar2 == 1) {
    uVar3 = std::vector<MazeScript,std::allocator<MazeScript>>::operator[]
                      ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c),0);
  }
  else {
    std::vector<MazeScript*,std::allocator<MazeScript*>>::vector(local_28);
    local_14 = 0;
    while( true ) {
      uVar4 = std::vector<MazeScript,std::allocator<MazeScript>>::size
                        ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c));
      if (uVar4 <= local_14) break;
      local_10 = (MazeScript *)
                 std::vector<MazeScript,std::allocator<MazeScript>>::operator[]
                           ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c),local_14
                           );
      if ((*(int *)(local_10 + 0x68) <= param_1) && (param_1 <= *(int *)(local_10 + 0x6c))) {
        local_1c = local_10;
                    /* try { // try from 0834d105 to 0834d139 has its CatchHandler @ 0834d1f0 */
        std::vector<MazeScript*,std::allocator<MazeScript*>>::push_back(local_28,&local_1c);
      }
      local_14 = local_14 + 1;
    }
    local_18 = 0;
    cVar1 = std::vector<MazeScript*,std::allocator<MazeScript*>>::empty();
    if (cVar1 == '\0') {
      iVar2 = std::vector<MazeScript*,std::allocator<MazeScript*>>::size(local_28);
      if (iVar2 == 1) {
        puVar5 = (undefined4 *)
                 std::vector<MazeScript*,std::allocator<MazeScript*>>::operator[](local_28,0);
        uVar3 = *puVar5;
      }
      else {
        uVar4 = rand();
        local_18 = std::vector<MazeScript*,std::allocator<MazeScript*>>::size(local_28);
        local_18 = uVar4 % local_18;
        puVar5 = (undefined4 *)
                 std::vector<MazeScript*,std::allocator<MazeScript*>>::operator[](local_28,local_18)
        ;
        uVar3 = *puVar5;
      }
    }
    else {
      uVar4 = rand();
      local_18 = std::vector<MazeScript,std::allocator<MazeScript>>::size
                           ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c));
      local_18 = uVar4 % local_18;
      uVar3 = std::vector<MazeScript,std::allocator<MazeScript>>::operator[]
                        ((vector<MazeScript,std::allocator<MazeScript>> *)(this + 0x62c),local_18);
    }
    std::vector<MazeScript*,std::allocator<MazeScript*>>::~vector(local_28);
  }
  return uVar3;
}
```

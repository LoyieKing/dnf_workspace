# setPatten

`_ZN19Secu_AccountHacking9setPattenEN18AccountHackingType1TEPKcjj`

`Secu_AccountHacking::setPatten(AccountHackingType::T, char const*, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Secu_AccountHacking` | `0x0827903c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827903c  _ZN19Secu_AccountHacking9setPattenEN18AccountHackingType1TEPKcjj
#           Secu_AccountHacking::setPatten(AccountHackingType::T, char const*, unsigned int, unsigned int)
# range [0x0827903c, 0x08279129]
0827903c +0x00:  push   %ebp
0827903d +0x01:  mov    %esp,%ebp
0827903f +0x03:  push   %esi
08279040 +0x04:  push   %ebx
08279041 +0x05:  sub    $0x30,%esp
08279044 +0x08:  mov    0xc(%ebp),%eax
08279047 +0x0b:  mov    0x8(%ebp),%edx
0827904a +0x0e:  movzbl (%edx,%eax,1),%eax
0827904e +0x12:  test   %al,%al
08279050 +0x14:  jne    0827911e <+0xe2>
08279056 +0x1a:  mov    0x8(%ebp),%eax
08279059 +0x1d:  mov    0x10(%eax),%eax
0827905c +0x20:  test   %eax,%eax
0827905e +0x22:  je     08279121 <+0xe5>
08279064 +0x28:  mov    0xc(%ebp),%eax
08279067 +0x2b:  mov    0x8(%ebp),%edx
0827906a +0x2e:  movb   $0x1,(%edx,%eax,1)
0827906e +0x32:  mov    0x14(%ebp),%eax
08279071 +0x35:  mov    %eax,-0x10(%ebp)
08279074 +0x38:  mov    0x18(%ebp),%eax
08279077 +0x3b:  mov    %eax,-0xc(%ebp)
0827907a +0x3e:  cmpl   $0x0,0x14(%ebp)
0827907e +0x42:  jne    082790ce <+0x92>
08279080 +0x44:  mov    0xc(%ebp),%eax
08279083 +0x47:  mov    %eax,0x4(%esp)
08279087 +0x4b:  mov    0x8(%ebp),%eax
0827908a +0x4e:  mov    %eax,(%esp)
0827908d +0x51:  call   0827912a <_ZN19Secu_AccountHacking19getMatchingHacktypeEN18AccountHackingType1TE>  ; Secu_AccountHacking::getMatchingHacktype(AccountHackingType::T)
08279092 +0x56:  mov    %eax,%ebx
08279094 +0x58:  mov    0x8(%ebp),%eax
08279097 +0x5b:  mov    0x10(%eax),%eax
0827909a +0x5e:  mov    %eax,(%esp)
0827909d +0x61:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
082790a2 +0x66:  movl   $0x0,0x14(%esp)
082790aa +0x6e:  mov    -0xc(%ebp),%edx
082790ad +0x71:  mov    %edx,0x10(%esp)
082790b1 +0x75:  mov    %ebx,0xc(%esp)
082790b5 +0x79:  mov    0x10(%ebp),%edx
082790b8 +0x7c:  mov    %edx,0x8(%esp)
082790bc +0x80:  movl   $0x0,0x4(%esp)
082790c4 +0x88:  mov    %eax,(%esp)
082790c7 +0x8b:  call   0844676c <_ZN18DB_SelectCharacMid11makeRequestEijPKcjjj>  ; DB_SelectCharacMid::makeRequest(int, unsigned int, char const*, unsigned int, unsigned int, unsigned int)
082790cc +0x90:  jmp    08279122 <+0xe6>
082790ce +0x92:  mov    0xc(%ebp),%eax
082790d1 +0x95:  mov    %eax,0x4(%esp)
082790d5 +0x99:  mov    0x8(%ebp),%eax
082790d8 +0x9c:  mov    %eax,(%esp)
082790db +0x9f:  call   0827912a <_ZN19Secu_AccountHacking19getMatchingHacktypeEN18AccountHackingType1TE>  ; Secu_AccountHacking::getMatchingHacktype(AccountHackingType::T)
082790e0 +0xa4:  mov    %eax,%ebx
082790e2 +0xa6:  mov    0x8(%ebp),%eax
082790e5 +0xa9:  mov    0x10(%eax),%esi
082790e8 +0xac:  mov    0x8(%ebp),%eax
082790eb +0xaf:  mov    0x10(%eax),%eax
082790ee +0xb2:  mov    %eax,(%esp)
082790f1 +0xb5:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
082790f6 +0xba:  mov    -0xc(%ebp),%edx
082790f9 +0xbd:  mov    %edx,0x14(%esp)
082790fd +0xc1:  mov    -0x10(%ebp),%edx
08279100 +0xc4:  mov    %edx,0x10(%esp)
08279104 +0xc8:  movl   $0x1,0xc(%esp)
0827910c +0xd0:  mov    %ebx,0x8(%esp)
08279110 +0xd4:  mov    %esi,0x4(%esp)
08279114 +0xd8:  mov    %eax,(%esp)
08279117 +0xdb:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
0827911c +0xe0:  jmp    08279122 <+0xe6>
0827911e +0xe2:  nop
0827911f +0xe3:  jmp    08279122 <+0xe6>
08279121 +0xe5:  nop
08279122 +0xe6:  add    $0x30,%esp
08279125 +0xe9:  pop    %ebx
08279126 +0xea:  pop    %esi
08279127 +0xeb:  pop    %ebp
08279128 +0xec:  ret
08279129 +0xed:  nop
```

## 反编译 C

```c
// Secu_AccountHacking::setPatten @ 0x827903c

/* Secu_AccountHacking::setPatten(AccountHackingType::T, char const*, unsigned int, unsigned int) */

void __thiscall
Secu_AccountHacking::setPatten
          (Secu_AccountHacking *this,int param_2,char *param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  CHackAnalyzer *pCVar5;
  
  if ((this[param_2] == (Secu_AccountHacking)0x0) && (*(int *)(this + 0x10) != 0)) {
    this[param_2] = (Secu_AccountHacking)0x1;
    if (param_4 == 0) {
      uVar2 = getMatchingHacktype(this,param_2);
      iVar3 = CUser::GetUID(*(CUser **)(this + 0x10));
      DB_SelectCharacMid::makeRequest(iVar3,0,param_3,uVar2,param_5,0);
    }
    else {
      uVar4 = getMatchingHacktype(this,param_2);
      uVar1 = *(undefined4 *)(this + 0x10);
      pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)(this + 0x10));
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,uVar1,uVar4,1,param_4,param_5);
    }
  }
  return;
}
```

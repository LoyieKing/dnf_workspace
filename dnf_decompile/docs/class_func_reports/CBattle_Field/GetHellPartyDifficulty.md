# GetHellPartyDifficulty

`_ZN13CBattle_Field22GetHellPartyDifficultyE17ENUM_DUNGEON_TYPE`

`CBattle_Field::GetHellPartyDifficulty(ENUM_DUNGEON_TYPE)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x082ffa2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ffa2e  _ZN13CBattle_Field22GetHellPartyDifficultyE17ENUM_DUNGEON_TYPE
#           CBattle_Field::GetHellPartyDifficulty(ENUM_DUNGEON_TYPE)
# range [0x082ffa2e, 0x082ffb05]
082ffa2e +0x00:  push   %ebp
082ffa2f +0x01:  mov    %esp,%ebp
082ffa31 +0x03:  sub    $0x38,%esp
082ffa34 +0x06:  movl   $0x0,-0x1a(%ebp)
082ffa3b +0x0d:  movw   $0x0,-0x16(%ebp)
082ffa41 +0x13:  cmpl   $0x1,0xc(%ebp)
082ffa45 +0x17:  jne    082ffa72 <+0x44>
082ffa47 +0x19:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082ffa4c +0x1e:  mov    %eax,(%esp)
082ffa4f +0x21:  call   0836378c <_ZN12CDataManager27get_hellparty_script_valuesEv>  ; CDataManager::get_hellparty_script_values()
082ffa54 +0x26:  add    $0x84,%eax
082ffa59 +0x2b:  movl   $0x6,0x8(%esp)
082ffa61 +0x33:  mov    %eax,0x4(%esp)
082ffa65 +0x37:  lea    -0x1a(%ebp),%eax
082ffa68 +0x3a:  mov    %eax,(%esp)
082ffa6b +0x3d:  call   0807d8a0 <_init+0x198>
082ffa70 +0x42:  jmp    082ffab6 <+0x88>
082ffa72 +0x44:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082ffa77 +0x49:  mov    %eax,(%esp)
082ffa7a +0x4c:  call   0836378c <_ZN12CDataManager27get_hellparty_script_valuesEv>  ; CDataManager::get_hellparty_script_values()
082ffa7f +0x51:  add    $0x7e,%eax
082ffa82 +0x54:  movl   $0x6,0x8(%esp)
082ffa8a +0x5c:  mov    %eax,0x4(%esp)
082ffa8e +0x60:  lea    -0x1a(%ebp),%eax
082ffa91 +0x63:  mov    %eax,(%esp)
082ffa94 +0x66:  call   0807d8a0 <_init+0x198>
082ffa99 +0x6b:  mov    0x8(%ebp),%eax
082ffa9c +0x6e:  mov    (%eax),%eax
082ffa9e +0x70:  test   %eax,%eax
082ffaa0 +0x72:  je     082ffab6 <+0x88>
082ffaa2 +0x74:  mov    0x8(%ebp),%eax
082ffaa5 +0x77:  mov    (%eax),%eax
082ffaa7 +0x79:  lea    -0x1a(%ebp),%edx
082ffaaa +0x7c:  mov    %edx,0x4(%esp)
082ffaae +0x80:  mov    %eax,(%esp)
082ffab1 +0x83:  call   0859bba8 <_ZN6CParty25increase_hell_party_ratioEPc>  ; CParty::increase_hell_party_ratio(char*)
082ffab6 +0x88:  movl   $0x0,-0x14(%ebp)
082ffabd +0x8f:  movl   $0x64,(%esp)
082ffac4 +0x96:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
082ffac9 +0x9b:  mov    %eax,-0x10(%ebp)
082ffacc +0x9e:  movl   $0x1,-0xc(%ebp)
082ffad3 +0xa5:  jmp    082ffaf4 <+0xc6>
082ffad5 +0xa7:  mov    -0xc(%ebp),%eax
082ffad8 +0xaa:  movzbl -0x1a(%ebp,%eax,1),%eax
082ffadd +0xaf:  movsbl %al,%eax
082ffae0 +0xb2:  add    %eax,-0x14(%ebp)
082ffae3 +0xb5:  mov    -0x14(%ebp),%eax
082ffae6 +0xb8:  cmp    -0x10(%ebp),%eax
082ffae9 +0xbb:  jl     082ffaf0 <+0xc2>
082ffaeb +0xbd:  mov    -0xc(%ebp),%eax
082ffaee +0xc0:  jmp    082ffb04 <+0xd6>
082ffaf0 +0xc2:  addl   $0x1,-0xc(%ebp)
082ffaf4 +0xc6:  cmpl   $0x5,-0xc(%ebp)
082ffaf8 +0xca:  setle  %al
082ffafb +0xcd:  test   %al,%al
082ffafd +0xcf:  jne    082ffad5 <+0xa7>
082ffaff +0xd1:  mov    $0x0,%eax
082ffb04 +0xd6:  leave
082ffb05 +0xd7:  ret
```

## 反编译 C

```c
// CBattle_Field::GetHellPartyDifficulty @ 0x82ffa2e

/* CBattle_Field::GetHellPartyDifficulty(ENUM_DUNGEON_TYPE) */

int __thiscall CBattle_Field::GetHellPartyDifficulty(CBattle_Field *this,int param_2)

{
  int iVar1;
  char local_1e [6];
  int local_18;
  int local_10;
  
  local_1e[0] = '\0';
  local_1e[1] = '\0';
  local_1e[2] = '\0';
  local_1e[3] = '\0';
  local_1e[4] = '\0';
  local_1e[5] = '\0';
  if (param_2 == 1) {
    G_CDataManager();
    iVar1 = CDataManager::get_hellparty_script_values();
    memcpy(local_1e,(void *)(iVar1 + 0x84),6);
  }
  else {
    G_CDataManager();
    iVar1 = CDataManager::get_hellparty_script_values();
    memcpy(local_1e,(void *)(iVar1 + 0x7e),6);
    if (*(int *)this != 0) {
      CParty::increase_hell_party_ratio(*(CParty **)this,local_1e);
    }
  }
  local_18 = 0;
  iVar1 = get_rand_int(100);
  local_10 = 1;
  while( true ) {
    if (5 < local_10) {
      return 0;
    }
    local_18 = local_18 + local_1e[local_10];
    if (iVar1 <= local_18) break;
    local_10 = local_10 + 1;
  }
  return local_10;
}
```

# ConnectP2P

`_ZN11pvp_assault13CAssaultPlace10ConnectP2PEP5CUserPci`

`pvp_assault::CAssaultPlace::ConnectP2P(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082eb956` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082eb956  _ZN11pvp_assault13CAssaultPlace10ConnectP2PEP5CUserPci
#           pvp_assault::CAssaultPlace::ConnectP2P(CUser*, char*, int)
# range [0x082eb956, 0x082ebaed]
082eb956 +0x000:  push   %ebp
082eb957 +0x001:  mov    %esp,%ebp
082eb959 +0x003:  sub    $0x28,%esp
082eb95c +0x006:  mov    0x8(%ebp),%eax
082eb95f +0x009:  mov    0x10c(%eax),%eax
082eb965 +0x00f:  cmp    $0x3,%eax
082eb968 +0x012:  je     082eb996 <+0x40>
082eb96a +0x014:  movl   $0x4,(%esp)
082eb971 +0x01b:  call   08725800 <__cxa_allocate_exception>
082eb976 +0x020:  mov    %eax,%edx
082eb978 +0x022:  movl   $0x13,(%edx)
082eb97e +0x028:  movl   $0x0,0x8(%esp)
082eb986 +0x030:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082eb98e +0x038:  mov    %eax,(%esp)
082eb991 +0x03b:  call   08724c50 <__cxa_throw>
082eb996 +0x040:  movb   $0x1,-0xd(%ebp)
082eb99a +0x044:  movl   $0x0,-0xc(%ebp)
082eb9a1 +0x04b:  jmp    082eba7f <+0x129>
082eb9a6 +0x050:  mov    -0xc(%ebp),%eax
082eb9a9 +0x053:  shl    $0x5,%eax
082eb9ac +0x056:  add    0x8(%ebp),%eax
082eb9af +0x059:  mov    %eax,(%esp)
082eb9b2 +0x05c:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082eb9b7 +0x061:  test   %al,%al
082eb9b9 +0x063:  jne    082eba7a <+0x124>
082eb9bf +0x069:  mov    -0xc(%ebp),%eax
082eb9c2 +0x06c:  shl    $0x5,%eax
082eb9c5 +0x06f:  add    0x8(%ebp),%eax
082eb9c8 +0x072:  mov    %eax,(%esp)
082eb9cb +0x075:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082eb9d0 +0x07a:  cmp    0xc(%ebp),%eax
082eb9d3 +0x07d:  sete   %al
082eb9d6 +0x080:  test   %al,%al
082eb9d8 +0x082:  je     082eba59 <+0x103>
082eb9da +0x084:  mov    -0xc(%ebp),%eax
082eb9dd +0x087:  shl    $0x5,%eax
082eb9e0 +0x08a:  add    0x8(%ebp),%eax
082eb9e3 +0x08d:  mov    %eax,(%esp)
082eb9e6 +0x090:  call   082f058a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x30e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x30e
082eb9eb +0x095:  cmp    $0x3,%eax
082eb9ee +0x098:  setne  %al
082eb9f1 +0x09b:  test   %al,%al
082eb9f3 +0x09d:  je     082eba21 <+0xcb>
082eb9f5 +0x09f:  movl   $0x4,(%esp)
082eb9fc +0x0a6:  call   08725800 <__cxa_allocate_exception>
082eba01 +0x0ab:  mov    %eax,%edx
082eba03 +0x0ad:  movl   $0x12,(%edx)
082eba09 +0x0b3:  movl   $0x0,0x8(%esp)
082eba11 +0x0bb:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
082eba19 +0x0c3:  mov    %eax,(%esp)
082eba1c +0x0c6:  call   08724c50 <__cxa_throw>
082eba21 +0x0cb:  mov    -0xc(%ebp),%eax
082eba24 +0x0ce:  shl    $0x5,%eax
082eba27 +0x0d1:  add    0x8(%ebp),%eax
082eba2a +0x0d4:  movl   $0x4,0x4(%esp)
082eba32 +0x0dc:  mov    %eax,(%esp)
082eba35 +0x0df:  call   082f057c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x300>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x300
082eba3a +0x0e4:  mov    -0xc(%ebp),%eax
082eba3d +0x0e7:  shl    $0x5,%eax
082eba40 +0x0ea:  add    0x8(%ebp),%eax
082eba43 +0x0ed:  mov    0x14(%ebp),%edx
082eba46 +0x0f0:  mov    %edx,0x8(%esp)
082eba4a +0x0f4:  mov    0x10(%ebp),%edx
082eba4d +0x0f7:  mov    %edx,0x4(%esp)
082eba51 +0x0fb:  mov    %eax,(%esp)
082eba54 +0x0fe:  call   082e6a82 <_ZN11pvp_assault10CAssaulter17SetUserConnectP2PEPci>  ; pvp_assault::CAssaulter::SetUserConnectP2P(char*, int)
082eba59 +0x103:  mov    -0xc(%ebp),%eax
082eba5c +0x106:  shl    $0x5,%eax
082eba5f +0x109:  add    0x8(%ebp),%eax
082eba62 +0x10c:  mov    %eax,(%esp)
082eba65 +0x10f:  call   082f058a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x30e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x30e
082eba6a +0x114:  cmp    $0x4,%eax
082eba6d +0x117:  setne  %al
082eba70 +0x11a:  test   %al,%al
082eba72 +0x11c:  je     082eba7b <+0x125>
082eba74 +0x11e:  movb   $0x0,-0xd(%ebp)
082eba78 +0x122:  jmp    082eba7b <+0x125>
082eba7a +0x124:  nop
082eba7b +0x125:  addl   $0x1,-0xc(%ebp)
082eba7f +0x129:  cmpl   $0x7,-0xc(%ebp)
082eba83 +0x12d:  setle  %al
082eba86 +0x130:  test   %al,%al
082eba88 +0x132:  jne    082eb9a6 <+0x50>
082eba8e +0x138:  cmpb   $0x0,-0xd(%ebp)
082eba92 +0x13c:  je     082ebaeb <+0x195>
082eba94 +0x13e:  mov    0x8(%ebp),%eax
082eba97 +0x141:  mov    %eax,(%esp)
082eba9a +0x144:  call   082e9502 <_ZN11pvp_assault13CAssaultPlace12StartAssaultEv>  ; pvp_assault::CAssaultPlace::StartAssault()
082eba9f +0x149:  mov    0x8(%ebp),%eax
082ebaa2 +0x14c:  mov    0x12c(%eax),%eax
082ebaa8 +0x152:  test   %eax,%eax
082ebaaa +0x154:  je     082ebac5 <+0x16f>
082ebaac +0x156:  mov    0x8(%ebp),%eax
082ebaaf +0x159:  mov    0x12c(%eax),%eax
082ebab5 +0x15f:  movl   $0x4,0x4(%esp)
082ebabd +0x167:  mov    %eax,(%esp)
082ebac0 +0x16a:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082ebac5 +0x16f:  mov    0x8(%ebp),%eax
082ebac8 +0x172:  mov    0x130(%eax),%eax
082ebace +0x178:  test   %eax,%eax
082ebad0 +0x17a:  je     082ebaeb <+0x195>
082ebad2 +0x17c:  mov    0x8(%ebp),%eax
082ebad5 +0x17f:  mov    0x130(%eax),%eax
082ebadb +0x185:  movl   $0x4,0x4(%esp)
082ebae3 +0x18d:  mov    %eax,(%esp)
082ebae6 +0x190:  call   082a5a34 <_GLOBAL__I__ZN4CLog5this_E+0x1e5b>  ; global constructors keyed to CLog::this_+0x1e5b
082ebaeb +0x195:  leave
082ebaec +0x196:  ret
082ebaed +0x197:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::ConnectP2P @ 0x82eb956

/* pvp_assault::CAssaultPlace::ConnectP2P(CUser*, char*, int) */

void pvp_assault::CAssaultPlace::ConnectP2P(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  int local_10;
  
  if (*(int *)(param_1 + 0x10c) != 3) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = 0x13;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
  }
  bVar1 = true;
  local_10 = 0;
  do {
    if (7 < local_10) {
      if (bVar1) {
        StartAssault((CAssaultPlace *)param_1);
        if (*(int *)(param_1 + 300) != 0) {
          CParty::SetAssaultState(*(CParty **)(param_1 + 300),'\x04');
        }
        if (*(int *)(param_1 + 0x130) != 0) {
          CParty::SetAssaultState(*(CParty **)(param_1 + 0x130),'\x04');
        }
      }
      return;
    }
    cVar2 = CAssaulter::Empty((CAssaulter *)(param_1 + local_10 * 0x20));
    if (cVar2 == '\0') {
      pcVar4 = (char *)CAssaulter::GetUser((CAssaulter *)(param_1 + local_10 * 0x20));
      if (pcVar4 == param_2) {
        iVar5 = CAssaulter::GetState((CAssaulter *)(param_1 + local_10 * 0x20));
        if (iVar5 != 3) {
          puVar3 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar3 = 0x12;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
        }
        CAssaulter::SetState((CAssaulter *)(param_1 + local_10 * 0x20),4);
        CAssaulter::SetUserConnectP2P((char *)(param_1 + local_10 * 0x20),param_3);
      }
      iVar5 = CAssaulter::GetState((CAssaulter *)(param_1 + local_10 * 0x20));
      if (iVar5 != 4) {
        bVar1 = false;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}
```

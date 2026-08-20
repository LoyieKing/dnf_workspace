# dispatch_sig

`_ZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_DieBloodMonster::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_DieBloodMonster` | `0x08220856` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08220856  _ZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_DieBloodMonster::dispatch_sig(CUser*, PacketBuf&)
# range [0x08220856, 0x08220a5f]
08220856 +0x000:  push   %ebp
08220857 +0x001:  mov    %esp,%ebp
08220859 +0x003:  push   %edi
0822085a +0x004:  push   %ebx
0822085b +0x005:  sub    $0x220,%esp
08220861 +0x00b:  cmpl   $0x0,0xc(%ebp)
08220865 +0x00f:  jne    08220890 <+0x3a>
08220867 +0x011:  movl   $0x0,0xc(%esp)
0822086f +0x019:  movl   $0x0,0x8(%esp)
08220877 +0x021:  movl   $&_ZZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0822087f +0x029:  movl   $0xda4b,(%esp)
08220886 +0x030:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0822088b +0x035:  jmp    08220a56 <+0x200>
08220890 +0x03a:  mov    0xc(%ebp),%eax
08220893 +0x03d:  mov    %eax,(%esp)
08220896 +0x040:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0822089b +0x045:  test   %eax,%eax
0822089d +0x047:  sete   %al
082208a0 +0x04a:  test   %al,%al
082208a2 +0x04c:  je     082208cd <+0x77>
082208a4 +0x04e:  movl   $0x0,0xc(%esp)
082208ac +0x056:  movl   $0x0,0x8(%esp)
082208b4 +0x05e:  movl   $&_ZZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082208bc +0x066:  movl   $0xda4c,(%esp)
082208c3 +0x06d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082208c8 +0x072:  jmp    08220a56 <+0x200>
082208cd +0x077:  movb   $0x0,-0x11(%ebp)
082208d1 +0x07b:  lea    -0x212(%ebp),%edx
082208d7 +0x081:  mov    $0x200,%ebx
082208dc +0x086:  mov    $0x0,%eax
082208e1 +0x08b:  mov    %edx,%ecx
082208e3 +0x08d:  and    $0x2,%ecx
082208e6 +0x090:  test   %ecx,%ecx
082208e8 +0x092:  je     082208f3 <+0x9d>
082208ea +0x094:  mov    %ax,(%edx)
082208ed +0x097:  add    $0x2,%edx
082208f0 +0x09a:  sub    $0x2,%ebx
082208f3 +0x09d:  mov    %ebx,%ecx
082208f5 +0x09f:  shr    $0x2,%ecx
082208f8 +0x0a2:  mov    %edx,%edi
082208fa +0x0a4:  rep stos %eax,%es:(%edi)
082208fc +0x0a6:  mov    %edi,%edx
082208fe +0x0a8:  mov    %ebx,%ecx
08220900 +0x0aa:  and    $0x2,%ecx
08220903 +0x0ad:  test   %ecx,%ecx
08220905 +0x0af:  je     0822090d <+0xb7>
08220907 +0x0b1:  mov    %ax,(%edx)
0822090a +0x0b4:  add    $0x2,%edx
0822090d +0x0b7:  mov    %ebx,%ecx
0822090f +0x0b9:  and    $0x1,%ecx
08220912 +0x0bc:  test   %ecx,%ecx
08220914 +0x0be:  je     0822091b <+0xc5>
08220916 +0x0c0:  mov    %al,(%edx)
08220918 +0x0c2:  add    $0x1,%edx
0822091b +0x0c5:  lea    -0x11(%ebp),%eax
0822091e +0x0c8:  mov    %eax,0x4(%esp)
08220922 +0x0cc:  mov    0x10(%ebp),%eax
08220925 +0x0cf:  mov    %eax,(%esp)
08220928 +0x0d2:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
0822092d +0x0d7:  xor    $0x1,%eax
08220930 +0x0da:  test   %al,%al
08220932 +0x0dc:  je     0822095d <+0x107>
08220934 +0x0de:  movl   $0x0,0xc(%esp)
0822093c +0x0e6:  movl   $0x0,0x8(%esp)
08220944 +0x0ee:  movl   $&_ZZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0822094c +0x0f6:  movl   $0xda51,(%esp)
08220953 +0x0fd:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08220958 +0x102:  jmp    08220a56 <+0x200>
0822095d +0x107:  movl   $0x0,-0x10(%ebp)
08220964 +0x10e:  jmp    082209b6 <+0x160>
08220966 +0x110:  mov    -0x10(%ebp),%edx
08220969 +0x113:  lea    -0x212(%ebp),%eax
0822096f +0x119:  add    %edx,%edx
08220971 +0x11b:  add    %edx,%eax
08220973 +0x11d:  mov    %eax,0x4(%esp)
08220977 +0x121:  mov    0x10(%ebp),%eax
0822097a +0x124:  mov    %eax,(%esp)
0822097d +0x127:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08220982 +0x12c:  xor    $0x1,%eax
08220985 +0x12f:  test   %al,%al
08220987 +0x131:  je     082209b2 <+0x15c>
08220989 +0x133:  movl   $0x0,0xc(%esp)
08220991 +0x13b:  movl   $0x0,0x8(%esp)
08220999 +0x143:  movl   $&_ZZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082209a1 +0x14b:  movl   $0xda54,(%esp)
082209a8 +0x152:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082209ad +0x157:  jmp    08220a56 <+0x200>
082209b2 +0x15c:  addl   $0x1,-0x10(%ebp)
082209b6 +0x160:  movzbl -0x11(%ebp),%eax
082209ba +0x164:  movzbl %al,%eax
082209bd +0x167:  cmp    -0x10(%ebp),%eax
082209c0 +0x16a:  setg   %al
082209c3 +0x16d:  test   %al,%al
082209c5 +0x16f:  jne    08220966 <+0x110>
082209c7 +0x171:  mov    0xc(%ebp),%eax
082209ca +0x174:  mov    %eax,(%esp)
082209cd +0x177:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082209d2 +0x17c:  cmp    $0x5,%eax
082209d5 +0x17f:  sete   %al
082209d8 +0x182:  test   %al,%al
082209da +0x184:  je     08220a51 <+0x1fb>
082209dc +0x186:  mov    0xc(%ebp),%eax
082209df +0x189:  mov    %eax,(%esp)
082209e2 +0x18c:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
082209e7 +0x191:  movswl %ax,%ebx
082209ea +0x194:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
082209ef +0x199:  mov    %ebx,0x4(%esp)
082209f3 +0x19d:  mov    %eax,(%esp)
082209f6 +0x1a0:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
082209fb +0x1a5:  mov    %eax,-0xc(%ebp)
082209fe +0x1a8:  cmpl   $0x0,-0xc(%ebp)
08220a02 +0x1ac:  jne    08220a2a <+0x1d4>
08220a04 +0x1ae:  movl   $0x0,0xc(%esp)
08220a0c +0x1b6:  movl   $0x0,0x8(%esp)
08220a14 +0x1be:  movl   $&_ZZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08220a1c +0x1c6:  movl   $0xda5a,(%esp)
08220a23 +0x1cd:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08220a28 +0x1d2:  jmp    08220a56 <+0x200>
08220a2a +0x1d4:  movzbl -0x11(%ebp),%eax
08220a2e +0x1d8:  movzbl %al,%eax
08220a31 +0x1db:  lea    -0x212(%ebp),%edx
08220a37 +0x1e1:  mov    %edx,0xc(%esp)
08220a3b +0x1e5:  mov    %eax,0x8(%esp)
08220a3f +0x1e9:  mov    0xc(%ebp),%eax
08220a42 +0x1ec:  mov    %eax,0x4(%esp)
08220a46 +0x1f0:  mov    -0xc(%ebp),%eax
08220a49 +0x1f3:  mov    %eax,(%esp)
08220a4c +0x1f6:  call   085a3b6a <_ZN6CParty18kill_blood_monsterEP5CUseriPt>  ; CParty::kill_blood_monster(CUser*, int, unsigned short*)
08220a51 +0x1fb:  mov    $0x0,%eax
08220a56 +0x200:  add    $0x220,%esp
08220a5c +0x206:  pop    %ebx
08220a5d +0x207:  pop    %edi
08220a5e +0x208:  pop    %ebp
08220a5f +0x209:  ret
```

## 反编译 C

```c
// Dispatcher_DieBloodMonster::dispatch_sig @ 0x8220856

/* WARNING: Removing unreachable block (ram,0x08220916) */
/* Dispatcher_DieBloodMonster::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_DieBloodMonster::dispatch_sig
          (Dispatcher_DieBloodMonster *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  ushort local_216 [256];
  byte local_15;
  int local_14;
  CParty *local_10;
  
  bVar7 = 0;
  if (param_1 == (CUser *)0x0) {
    uVar2 = LineFunc(0xda4b,
                     "virtual int Dispatcher_DieBloodMonster::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  else {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 == 0) {
      uVar2 = LineFunc(0xda4c,
                       "virtual int Dispatcher_DieBloodMonster::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
    else {
      local_15 = 0;
      puVar4 = local_216;
      uVar5 = 0x200;
      bVar6 = ((uint)puVar4 & 2) != 0;
      if (bVar6) {
        local_216[0] = 0;
        puVar4 = local_216 + 1;
        uVar5 = 0x1fe;
      }
      for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        puVar4[0] = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + ((uint)bVar7 * -2 + 1) * 2;
      }
      if (bVar6) {
        *puVar4 = 0;
      }
      cVar1 = PacketBuf::get_byte(param_2,&local_15);
      if (cVar1 == '\x01') {
        for (local_14 = 0; local_14 < (int)(uint)local_15; local_14 = local_14 + 1) {
          cVar1 = PacketBuf::get_short(param_2,local_216 + local_14);
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0xda54,
                             "virtual int Dispatcher_DieBloodMonster::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar2;
          }
        }
        iVar3 = CUser::get_state(param_1);
        if (iVar3 == 5) {
          CUser::GetPartyIndex(param_1);
          iVar3 = G_CGameManager();
          local_10 = (CParty *)CGameManager::GetParty(iVar3);
          if (local_10 == (CParty *)0x0) {
            uVar2 = LineFunc(0xda5a,
                             "virtual int Dispatcher_DieBloodMonster::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar2;
          }
          CParty::kill_blood_monster(local_10,param_1,(uint)local_15,local_216);
        }
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0xda51,
                         "virtual int Dispatcher_DieBloodMonster::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
  }
  return uVar2;
}
```

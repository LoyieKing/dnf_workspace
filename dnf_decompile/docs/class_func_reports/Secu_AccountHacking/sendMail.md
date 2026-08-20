# sendMail

`_ZN19Secu_AccountHacking8sendMailEPKcP23MSG_CHECK_MAIL_RECEIVER`

`Secu_AccountHacking::sendMail(char const*, MSG_CHECK_MAIL_RECEIVER*)`

| 类 | 地址 |
|---|---|
| `Secu_AccountHacking` | `0x08278b48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08278b48  _ZN19Secu_AccountHacking8sendMailEPKcP23MSG_CHECK_MAIL_RECEIVER
#           Secu_AccountHacking::sendMail(char const*, MSG_CHECK_MAIL_RECEIVER*)
# range [0x08278b48, 0x08278ccd]
08278b48 +0x000:  push   %ebp
08278b49 +0x001:  mov    %esp,%ebp
08278b4b +0x003:  sub    $0x38,%esp
08278b4e +0x006:  mov    0x8(%ebp),%eax
08278b51 +0x009:  mov    0x10(%eax),%eax
08278b54 +0x00c:  mov    %eax,(%esp)
08278b57 +0x00f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08278b5c +0x014:  test   %eax,%eax
08278b5e +0x016:  sete   %al
08278b61 +0x019:  test   %al,%al
08278b63 +0x01b:  jne    08278cca <+0x182>
08278b69 +0x021:  mov    0x10(%ebp),%eax
08278b6c +0x024:  mov    (%eax),%eax
08278b6e +0x026:  test   %eax,%eax
08278b70 +0x028:  jne    08278c02 <+0xba>
08278b76 +0x02e:  mov    0x8(%ebp),%eax
08278b79 +0x031:  mov    0x10(%eax),%eax
08278b7c +0x034:  mov    %eax,(%esp)
08278b7f +0x037:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08278b84 +0x03c:  mov    %eax,(%esp)
08278b87 +0x03f:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
08278b8c +0x044:  mov    %eax,%edx
08278b8e +0x046:  mov    0x10(%ebp),%eax
08278b91 +0x049:  mov    0x32(%eax),%eax
08278b94 +0x04c:  movl   $0x0,0x18(%esp)
08278b9c +0x054:  movl   $0x2,0x14(%esp)
08278ba4 +0x05c:  mov    %edx,0x10(%esp)
08278ba8 +0x060:  mov    %eax,0xc(%esp)
08278bac +0x064:  movl   $0x0,0x8(%esp)
08278bb4 +0x06c:  mov    0xc(%ebp),%eax
08278bb7 +0x06f:  mov    %eax,0x4(%esp)
08278bbb +0x073:  mov    0x8(%ebp),%eax
08278bbe +0x076:  mov    %eax,(%esp)
08278bc1 +0x079:  call   08278cce <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc>  ; Secu_AccountHacking::sendGold(char const*, unsigned int, unsigned int, unsigned int, unsigned char, char*)
08278bc6 +0x07e:  mov    0x10(%ebp),%eax
08278bc9 +0x081:  mov    0x3d(%eax),%eax
08278bcc +0x084:  mov    %eax,0x4(%esp)
08278bd0 +0x088:  mov    0x8(%ebp),%eax
08278bd3 +0x08b:  mov    %eax,(%esp)
08278bd6 +0x08e:  call   08278aec <_ZN19Secu_AccountHacking8isAvatarEj>  ; Secu_AccountHacking::isAvatar(unsigned int)
08278bdb +0x093:  test   %al,%al
08278bdd +0x095:  je     08278ccb <+0x183>
08278be3 +0x09b:  movl   $0x0,0x8(%esp)
08278beb +0x0a3:  mov    0xc(%ebp),%eax
08278bee +0x0a6:  mov    %eax,0x4(%esp)
08278bf2 +0x0aa:  mov    0x8(%ebp),%eax
08278bf5 +0x0ad:  mov    %eax,(%esp)
08278bf8 +0x0b0:  call   08278f16 <_ZN19Secu_AccountHacking10sendAvatarEPKcj>  ; Secu_AccountHacking::sendAvatar(char const*, unsigned int)
08278bfd +0x0b5:  jmp    08278ccb <+0x183>
08278c02 +0x0ba:  mov    0x10(%ebp),%eax
08278c05 +0x0bd:  mov    (%eax),%eax
08278c07 +0x0bf:  cmp    $0x2,%eax
08278c0a +0x0c2:  jne    08278ccb <+0x183>
08278c10 +0x0c8:  mov    0x8(%ebp),%eax
08278c13 +0x0cb:  mov    0x10(%eax),%eax
08278c16 +0x0ce:  mov    %eax,(%esp)
08278c19 +0x0d1:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08278c1e +0x0d6:  mov    %eax,(%esp)
08278c21 +0x0d9:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
08278c26 +0x0de:  mov    %eax,%edx
08278c28 +0x0e0:  mov    0x10(%ebp),%eax
08278c2b +0x0e3:  mov    0x33(%eax),%eax
08278c2e +0x0e6:  movl   $0x0,0x18(%esp)
08278c36 +0x0ee:  movl   $0x2,0x14(%esp)
08278c3e +0x0f6:  mov    %edx,0x10(%esp)
08278c42 +0x0fa:  mov    %eax,0xc(%esp)
08278c46 +0x0fe:  movl   $0x0,0x8(%esp)
08278c4e +0x106:  mov    0xc(%ebp),%eax
08278c51 +0x109:  mov    %eax,0x4(%esp)
08278c55 +0x10d:  mov    0x8(%ebp),%eax
08278c58 +0x110:  mov    %eax,(%esp)
08278c5b +0x113:  call   08278cce <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc>  ; Secu_AccountHacking::sendGold(char const*, unsigned int, unsigned int, unsigned int, unsigned char, char*)
08278c60 +0x118:  movl   $0x0,-0xc(%ebp)
08278c67 +0x11f:  jmp    08278cb4 <+0x16c>
08278c69 +0x121:  mov    -0xc(%ebp),%edx
08278c6c +0x124:  mov    0x10(%ebp),%ecx
08278c6f +0x127:  mov    %edx,%eax
08278c71 +0x129:  shl    $0x2,%eax
08278c74 +0x12c:  add    %edx,%eax
08278c76 +0x12e:  add    %eax,%eax
08278c78 +0x130:  add    %edx,%eax
08278c7a +0x132:  lea    (%ecx,%eax,1),%eax
08278c7d +0x135:  add    $0x30,%eax
08278c80 +0x138:  mov    0xb(%eax),%eax
08278c83 +0x13b:  mov    %eax,0x4(%esp)
08278c87 +0x13f:  mov    0x8(%ebp),%eax
08278c8a +0x142:  mov    %eax,(%esp)
08278c8d +0x145:  call   08278aec <_ZN19Secu_AccountHacking8isAvatarEj>  ; Secu_AccountHacking::isAvatar(unsigned int)
08278c92 +0x14a:  test   %al,%al
08278c94 +0x14c:  je     08278cb0 <+0x168>
08278c96 +0x14e:  movl   $0x0,0x8(%esp)
08278c9e +0x156:  mov    0xc(%ebp),%eax
08278ca1 +0x159:  mov    %eax,0x4(%esp)
08278ca5 +0x15d:  mov    0x8(%ebp),%eax
08278ca8 +0x160:  mov    %eax,(%esp)
08278cab +0x163:  call   08278f16 <_ZN19Secu_AccountHacking10sendAvatarEPKcj>  ; Secu_AccountHacking::sendAvatar(char const*, unsigned int)
08278cb0 +0x168:  addl   $0x1,-0xc(%ebp)
08278cb4 +0x16c:  mov    0x10(%ebp),%eax
08278cb7 +0x16f:  movzbl 0x37(%eax),%eax
08278cbb +0x173:  movzbl %al,%eax
08278cbe +0x176:  cmp    -0xc(%ebp),%eax
08278cc1 +0x179:  setg   %al
08278cc4 +0x17c:  test   %al,%al
08278cc6 +0x17e:  jne    08278c69 <+0x121>
08278cc8 +0x180:  jmp    08278ccb <+0x183>
08278cca +0x182:  nop
08278ccb +0x183:  leave
08278ccc +0x184:  ret
08278ccd +0x185:  nop
```

## 反编译 C

```c
// Secu_AccountHacking::sendMail @ 0x8278b48

/* Secu_AccountHacking::sendMail(char const*, MSG_CHECK_MAIL_RECEIVER*) */

void __thiscall
Secu_AccountHacking::sendMail
          (Secu_AccountHacking *this,char *param_1,MSG_CHECK_MAIL_RECEIVER *param_2)

{
  char cVar1;
  int iVar2;
  CInventory *pCVar3;
  uint uVar4;
  int local_10;
  
  iVar2 = CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x10));
  if (iVar2 != 0) {
    if (*(int *)param_2 == 0) {
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x10))
      ;
      uVar4 = CInventory::get_money(pCVar3);
      sendGold(this,param_1,0,*(uint *)(param_2 + 0x32),uVar4,'\x02',(char *)0x0);
      cVar1 = isAvatar(this,*(uint *)(param_2 + 0x3d));
      if (cVar1 != '\0') {
        sendAvatar(this,param_1,0);
      }
    }
    else if (*(int *)param_2 == 2) {
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x10))
      ;
      uVar4 = CInventory::get_money(pCVar3);
      sendGold(this,param_1,0,*(uint *)(param_2 + 0x33),uVar4,'\x02',(char *)0x0);
      for (local_10 = 0; local_10 < (int)(uint)(byte)param_2[0x37]; local_10 = local_10 + 1) {
        cVar1 = isAvatar(this,*(uint *)(param_2 + local_10 * 0xb + 0x3b));
        if (cVar1 != '\0') {
          sendAvatar(this,param_1,0);
        }
      }
    }
  }
  return;
}
```

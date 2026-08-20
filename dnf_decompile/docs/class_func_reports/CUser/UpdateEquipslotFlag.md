# UpdateEquipslotFlag

`_ZN5CUser19UpdateEquipslotFlagEc`

`CUser::UpdateEquipslotFlag(char)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868aa54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868aa54  _ZN5CUser19UpdateEquipslotFlagEc
#           CUser::UpdateEquipslotFlag(char)
# range [0x0868aa54, 0x0868aae9]
0868aa54 +0x00:  push   %ebp
0868aa55 +0x01:  mov    %esp,%ebp
0868aa57 +0x03:  sub    $0x28,%esp
0868aa5a +0x06:  mov    0xc(%ebp),%eax
0868aa5d +0x09:  mov    %al,-0xc(%ebp)
0868aa60 +0x0c:  mov    0x8(%ebp),%eax
0868aa63 +0x0f:  mov    %eax,(%esp)
0868aa66 +0x12:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0868aa6b +0x17:  cmp    $0x2c,%eax
0868aa6e +0x1a:  setg   %al
0868aa71 +0x1d:  test   %al,%al
0868aa73 +0x1f:  je     0868aae3 <+0x8f>
0868aa75 +0x21:  cmpb   $0x0,-0xc(%ebp)
0868aa79 +0x25:  jne    0868aab6 <+0x62>
0868aa7b +0x27:  mov    0x8(%ebp),%eax
0868aa7e +0x2a:  mov    %eax,(%esp)
0868aa81 +0x2d:  call   08696c10 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3465>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3465
0868aa86 +0x32:  cmp    $0x2,%al
0868aa88 +0x34:  sete   %al
0868aa8b +0x37:  test   %al,%al
0868aa8d +0x39:  je     0868aa96 <+0x42>
0868aa8f +0x3b:  mov    $0x2,%eax
0868aa94 +0x40:  jmp    0868aae8 <+0x94>
0868aa96 +0x42:  mov    0x8(%ebp),%eax
0868aa99 +0x45:  movl   $0x1,0x4(%esp)
0868aaa1 +0x4d:  mov    %eax,(%esp)
0868aaa4 +0x50:  call   08696c34 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3489>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3489
0868aaa9 +0x55:  mov    0x8(%ebp),%eax
0868aaac +0x58:  mov    %eax,(%esp)
0868aaaf +0x5b:  call   08696c10 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3465>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3465
0868aab4 +0x60:  jmp    0868aae8 <+0x94>
0868aab6 +0x62:  cmpb   $0x2,-0xc(%ebp)
0868aaba +0x66:  jne    0868aadc <+0x88>
0868aabc +0x68:  mov    0x8(%ebp),%eax
0868aabf +0x6b:  movl   $0x2,0x4(%esp)
0868aac7 +0x73:  mov    %eax,(%esp)
0868aaca +0x76:  call   08696c34 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3489>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3489
0868aacf +0x7b:  mov    0x8(%ebp),%eax
0868aad2 +0x7e:  mov    %eax,(%esp)
0868aad5 +0x81:  call   08696c10 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3465>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3465
0868aada +0x86:  jmp    0868aae8 <+0x94>
0868aadc +0x88:  mov    $0x13,%eax
0868aae1 +0x8d:  jmp    0868aae8 <+0x94>
0868aae3 +0x8f:  mov    $0x0,%eax
0868aae8 +0x94:  leave
0868aae9 +0x95:  ret
```

## 反编译 C

```c
// CUser::UpdateEquipslotFlag @ 0x868aa54

/* CUser::UpdateEquipslotFlag(char) */

undefined4 __thiscall CUser::UpdateEquipslotFlag(CUser *this,char param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  if (iVar2 < 0x2d) {
    uVar3 = 0;
  }
  else if (param_1 == '\0') {
    cVar1 = CUserCharacInfo::getCurEquipslotFlag((CUserCharacInfo *)this);
    if (cVar1 == '\x02') {
      uVar3 = 2;
    }
    else {
      CUserCharacInfo::setCurEquipslotFlag((CUserCharacInfo *)this,'\x01');
      uVar3 = CUserCharacInfo::getCurEquipslotFlag((CUserCharacInfo *)this);
    }
  }
  else if (param_1 == '\x02') {
    CUserCharacInfo::setCurEquipslotFlag((CUserCharacInfo *)this,'\x02');
    uVar3 = CUserCharacInfo::getCurEquipslotFlag((CUserCharacInfo *)this);
  }
  else {
    uVar3 = 0x13;
  }
  return uVar3;
}
```

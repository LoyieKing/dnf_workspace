# ActiveFatigueBattery

`_ZN21CFatigueBatteryHandle20ActiveFatigueBatteryEP5CUser`

`CFatigueBatteryHandle::ActiveFatigueBattery(CUser*)`

| 类 | 地址 |
|---|---|
| `CFatigueBatteryHandle` | `0x084a83da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a83da  _ZN21CFatigueBatteryHandle20ActiveFatigueBatteryEP5CUser
#           CFatigueBatteryHandle::ActiveFatigueBattery(CUser*)
# range [0x084a83da, 0x084a8459]
084a83da +0x00:  push   %ebp
084a83db +0x01:  mov    %esp,%ebp
084a83dd +0x03:  push   %ebx
084a83de +0x04:  sub    $0x24,%esp
084a83e1 +0x07:  movl   $0x0,-0x10(%ebp)
084a83e8 +0x0e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084a83ed +0x13:  add    $0x68,%eax
084a83f0 +0x16:  mov    %eax,-0xc(%ebp)
084a83f3 +0x19:  mov    -0xc(%ebp),%eax
084a83f6 +0x1c:  movzbl 0x5c9(%eax),%eax
084a83fd +0x23:  movzbl %al,%ebx
084a8400 +0x26:  mov    0xc(%ebp),%eax
084a8403 +0x29:  mov    %eax,(%esp)
084a8406 +0x2c:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084a840b +0x31:  cmp    %eax,%ebx
084a840d +0x33:  jg     084a8432 <+0x58>
084a840f +0x35:  mov    0xc(%ebp),%eax
084a8412 +0x38:  mov    %eax,(%esp)
084a8415 +0x3b:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
084a841a +0x40:  mov    -0xc(%ebp),%edx
084a841d +0x43:  movzbl 0x5d0(%edx),%edx
084a8424 +0x4a:  movzbl %dl,%edx
084a8427 +0x4d:  cmp    %edx,%eax
084a8429 +0x4f:  jge    084a8432 <+0x58>
084a842b +0x51:  mov    $0x1,%eax
084a8430 +0x56:  jmp    084a8437 <+0x5d>
084a8432 +0x58:  mov    $0x0,%eax
084a8437 +0x5d:  test   %al,%al
084a8439 +0x5f:  je     084a8451 <+0x77>
084a843b +0x61:  mov    0xc(%ebp),%eax
084a843e +0x64:  mov    %eax,0x4(%esp)
084a8442 +0x68:  mov    0x8(%ebp),%eax
084a8445 +0x6b:  mov    %eax,(%esp)
084a8448 +0x6e:  call   084a829e <_ZN21CFatigueBatteryHandle32ActiveFatigueBattery_NotEndLevelEP5CUser>  ; CFatigueBatteryHandle::ActiveFatigueBattery_NotEndLevel(CUser*)
084a844d +0x73:  cwtl
084a844e +0x74:  mov    %eax,-0x10(%ebp)
084a8451 +0x77:  mov    -0x10(%ebp),%eax
084a8454 +0x7a:  add    $0x24,%esp
084a8457 +0x7d:  pop    %ebx
084a8458 +0x7e:  pop    %ebp
084a8459 +0x7f:  ret
```

## 反编译 C

```c
// CFatigueBatteryHandle::ActiveFatigueBattery @ 0x84a83da

/* CFatigueBatteryHandle::ActiveFatigueBattery(CUser*) */

int __thiscall
CFatigueBatteryHandle::ActiveFatigueBattery(CFatigueBatteryHandle *this,CUser *param_1)

{
  byte bVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 local_14;
  
  local_14 = 0;
  iVar4 = G_CDataManager();
  bVar1 = *(byte *)(iVar4 + 0x631);
  iVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  if ((int)(uint)bVar1 <= iVar5) {
    iVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if (iVar5 < (int)(uint)*(byte *)(iVar4 + 0x638)) {
      bVar2 = true;
      goto LAB_084a8437;
    }
  }
  bVar2 = false;
LAB_084a8437:
  if (bVar2) {
    sVar3 = ActiveFatigueBattery_NotEndLevel(this,param_1);
    local_14 = (int)sVar3;
  }
  return local_14;
}
```

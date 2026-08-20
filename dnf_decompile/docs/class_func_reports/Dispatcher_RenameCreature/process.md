# process

`_ZN25Dispatcher_RenameCreature7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_RenameCreature::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RenameCreature` | `0x081cd110` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cd110  _ZN25Dispatcher_RenameCreature7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_RenameCreature::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cd110, 0x081cd21b]
081cd110 +0x000:  push   %ebp
081cd111 +0x001:  mov    %esp,%ebp
081cd113 +0x003:  push   %edi
081cd114 +0x004:  push   %esi
081cd115 +0x005:  push   %ebx
081cd116 +0x006:  sub    $0x2c,%esp
081cd119 +0x009:  mov    0x14(%ebp),%eax
081cd11c +0x00c:  mov    %eax,-0x20(%ebp)
081cd11f +0x00f:  mov    0x10(%ebp),%eax
081cd122 +0x012:  mov    %eax,0x8(%esp)
081cd126 +0x016:  mov    0xc(%ebp),%eax
081cd129 +0x019:  mov    %eax,0x4(%esp)
081cd12d +0x01d:  mov    0x8(%ebp),%eax
081cd130 +0x020:  mov    %eax,(%esp)
081cd133 +0x023:  call   081cd254 <_ZN25Dispatcher_RenameCreature11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_RenameCreature::check_error(CUser*, MSG_BASE&)
081cd138 +0x028:  mov    %eax,%edx
081cd13a +0x02a:  mov    -0x20(%ebp),%eax
081cd13d +0x02d:  mov    %edx,0x4(%eax)
081cd140 +0x030:  mov    -0x20(%ebp),%eax
081cd143 +0x033:  mov    0x4(%eax),%eax
081cd146 +0x036:  test   %eax,%eax
081cd148 +0x038:  jle    081cd154 <+0x44>
081cd14a +0x03a:  mov    $0x0,%eax
081cd14f +0x03f:  jmp    081cd214 <+0x104>
081cd154 +0x044:  mov    -0x20(%ebp),%eax
081cd157 +0x047:  mov    0x4(%eax),%eax
081cd15a +0x04a:  test   %eax,%eax
081cd15c +0x04c:  jns    081cd190 <+0x80>
081cd15e +0x04e:  mov    0xc(%ebp),%eax
081cd161 +0x051:  mov    %eax,(%esp)
081cd164 +0x054:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cd169 +0x059:  mov    -0x20(%ebp),%edx
081cd16c +0x05c:  mov    0x4(%edx),%edx
081cd16f +0x05f:  mov    %eax,0xc(%esp)
081cd173 +0x063:  mov    %edx,0x8(%esp)
081cd177 +0x067:  movl   $&_ZZN25Dispatcher_RenameCreature7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081cd17f +0x06f:  movl   $0x24d3,(%esp)
081cd186 +0x076:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cd18b +0x07b:  jmp    081cd214 <+0x104>
081cd190 +0x080:  mov    0x10(%ebp),%eax
081cd193 +0x083:  mov    %eax,-0x1c(%ebp)
081cd196 +0x086:  mov    -0x1c(%ebp),%eax
081cd199 +0x089:  add    $0x14,%eax
081cd19c +0x08c:  movl   $"이름없음",0x4(%esp)
081cd1a4 +0x094:  mov    %eax,(%esp)
081cd1a7 +0x097:  call   0807e4e0 <_init+0xdd8>
081cd1ac +0x09c:  test   %eax,%eax
081cd1ae +0x09e:  jne    081cd1ce <+0xbe>
081cd1b0 +0x0a0:  mov    -0x1c(%ebp),%eax
081cd1b3 +0x0a3:  add    $0x14,%eax
081cd1b6 +0x0a6:  movl   $0xd,0x8(%esp)
081cd1be +0x0ae:  movl   $0x0,0x4(%esp)
081cd1c6 +0x0b6:  mov    %eax,(%esp)
081cd1c9 +0x0b9:  call   0807dcc0 <_init+0x5b8>
081cd1ce +0x0be:  mov    -0x1c(%ebp),%eax
081cd1d1 +0x0c1:  movzbl 0xd(%eax),%eax
081cd1d5 +0x0c5:  movsbl %al,%esi
081cd1d8 +0x0c8:  mov    -0x1c(%ebp),%eax
081cd1db +0x0cb:  movzwl 0xe(%eax),%eax
081cd1df +0x0cf:  movswl %ax,%ebx
081cd1e2 +0x0d2:  mov    -0x1c(%ebp),%eax
081cd1e5 +0x0d5:  lea    0x14(%eax),%edi
081cd1e8 +0x0d8:  mov    0xc(%ebp),%eax
081cd1eb +0x0db:  mov    %eax,(%esp)
081cd1ee +0x0de:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081cd1f3 +0x0e3:  mov    %eax,(%esp)
081cd1f6 +0x0e6:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
081cd1fb +0x0eb:  mov    %esi,0xc(%esp)
081cd1ff +0x0ef:  mov    %ebx,0x8(%esp)
081cd203 +0x0f3:  mov    %edi,0x4(%esp)
081cd207 +0x0f7:  mov    %eax,(%esp)
081cd20a +0x0fa:  call   08339b6e <_ZN13user_creature12CCreatureMgr14RenameCreatureEPKcii>  ; user_creature::CCreatureMgr::RenameCreature(char const*, int, int)
081cd20f +0x0ff:  mov    $0x0,%eax
081cd214 +0x104:  add    $0x2c,%esp
081cd217 +0x107:  pop    %ebx
081cd218 +0x108:  pop    %esi
081cd219 +0x109:  pop    %edi
081cd21a +0x10a:  pop    %ebp
081cd21b +0x10b:  ret
```

## 反编译 C

```c
// Dispatcher_RenameCreature::process @ 0x81cd110

/* Dispatcher_RenameCreature::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_RenameCreature::process
          (Dispatcher_RenameCreature *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  CInventory *this_00;
  CCreatureMgr *this_01;
  
  uVar3 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar3;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar4 = CUser::get_acc_id(param_1);
      uVar3 = LineFunc(0x24d3,
                       "virtual int Dispatcher_RenameCreature::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar4);
    }
    else {
      iVar5 = strcmp((char *)(param_2 + 0x14),&DAT_08bc17bf);
      if (iVar5 == 0) {
        memset(param_2 + 0x14,0,0xd);
      }
      MVar1 = param_2[0xd];
      sVar2 = *(short *)(param_2 + 0xe);
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      this_01 = (CCreatureMgr *)CInventory::GetCreatureMgrW(this_00);
      user_creature::CCreatureMgr::RenameCreature
                (this_01,(char *)(param_2 + 0x14),(int)sVar2,(int)(char)MVar1);
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```

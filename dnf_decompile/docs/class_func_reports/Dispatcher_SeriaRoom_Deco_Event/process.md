# process

`_ZN31Dispatcher_SeriaRoom_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_SeriaRoom_Deco_Event::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SeriaRoom_Deco_Event` | `0x081e5cde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e5cde  _ZN31Dispatcher_SeriaRoom_Deco_Event7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_SeriaRoom_Deco_Event::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e5cde, 0x081e5e4f]
081e5cde +0x000:  push   %ebp
081e5cdf +0x001:  mov    %esp,%ebp
081e5ce1 +0x003:  push   %ebx
081e5ce2 +0x004:  sub    $0x74,%esp
081e5ce5 +0x007:  mov    0x10(%ebp),%eax
081e5ce8 +0x00a:  mov    %eax,-0x18(%ebp)
081e5ceb +0x00d:  mov    0x14(%ebp),%eax
081e5cee +0x010:  mov    %eax,-0x14(%ebp)
081e5cf1 +0x013:  mov    0x10(%ebp),%eax
081e5cf4 +0x016:  mov    %eax,0x8(%esp)
081e5cf8 +0x01a:  mov    0xc(%ebp),%eax
081e5cfb +0x01d:  mov    %eax,0x4(%esp)
081e5cff +0x021:  mov    0x8(%ebp),%eax
081e5d02 +0x024:  mov    %eax,(%esp)
081e5d05 +0x027:  call   081e5e50 <_ZN31Dispatcher_SeriaRoom_Deco_Event11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_SeriaRoom_Deco_Event::check_error(CUser*, MSG_BASE&)
081e5d0a +0x02c:  mov    -0x14(%ebp),%edx
081e5d0d +0x02f:  mov    %eax,0x4(%edx)
081e5d10 +0x032:  mov    -0x14(%ebp),%eax
081e5d13 +0x035:  mov    0x4(%eax),%eax
081e5d16 +0x038:  test   %eax,%eax
081e5d18 +0x03a:  jle    081e5d24 <+0x46>
081e5d1a +0x03c:  mov    $0x0,%eax
081e5d1f +0x041:  jmp    081e5e4b <+0x16d>
081e5d24 +0x046:  mov    -0x14(%ebp),%eax
081e5d27 +0x049:  mov    0x4(%eax),%eax
081e5d2a +0x04c:  test   %eax,%eax
081e5d2c +0x04e:  jns    081e5d59 <+0x7b>
081e5d2e +0x050:  mov    -0x14(%ebp),%eax
081e5d31 +0x053:  mov    0x4(%eax),%eax
081e5d34 +0x056:  movl   $0x0,0xc(%esp)
081e5d3c +0x05e:  mov    %eax,0x8(%esp)
081e5d40 +0x062:  movl   $&_ZZN31Dispatcher_SeriaRoom_Deco_Event7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e5d48 +0x06a:  movl   $0x6010,(%esp)
081e5d4f +0x071:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e5d54 +0x076:  jmp    081e5e4b <+0x16d>
081e5d59 +0x07b:  mov    -0x18(%ebp),%eax
081e5d5c +0x07e:  movzwl 0xe(%eax),%eax
081e5d60 +0x082:  movzwl %ax,%ebx
081e5d63 +0x085:  mov    0xc(%ebp),%eax
081e5d66 +0x088:  mov    %eax,(%esp)
081e5d69 +0x08b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081e5d6e +0x090:  lea    -0x55(%ebp),%edx
081e5d71 +0x093:  mov    %ebx,0xc(%esp)
081e5d75 +0x097:  movl   $0x1,0x8(%esp)
081e5d7d +0x09f:  mov    %eax,0x4(%esp)
081e5d81 +0x0a3:  mov    %edx,(%esp)
081e5d84 +0x0a6:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081e5d89 +0x0ab:  sub    $0x4,%esp
081e5d8c +0x0ae:  mov    -0x53(%ebp),%eax
081e5d8f +0x0b1:  mov    %eax,%ebx
081e5d91 +0x0b3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e5d96 +0x0b8:  mov    %ebx,0x4(%esp)
081e5d9a +0x0bc:  mov    %eax,(%esp)
081e5d9d +0x0bf:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081e5da2 +0x0c4:  mov    %eax,-0x10(%ebp)
081e5da5 +0x0c7:  cmpl   $0x0,-0x10(%ebp)
081e5da9 +0x0cb:  jne    081e5dbf <+0xe1>
081e5dab +0x0cd:  mov    -0x14(%ebp),%eax
081e5dae +0x0d0:  movl   $0x11,0x4(%eax)
081e5db5 +0x0d7:  mov    $0x0,%eax
081e5dba +0x0dc:  jmp    081e5e4b <+0x16d>
081e5dbf +0x0e1:  mov    -0x53(%ebp),%eax
081e5dc2 +0x0e4:  mov    %eax,%ebx
081e5dc4 +0x0e6:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e5dc9 +0x0eb:  mov    %ebx,0x4(%esp)
081e5dcd +0x0ef:  mov    %eax,(%esp)
081e5dd0 +0x0f2:  call   083654ba <_ZN12CDataManager17getVaildEventItemEi>  ; CDataManager::getVaildEventItem(int)
081e5dd5 +0x0f7:  xor    $0x1,%eax
081e5dd8 +0x0fa:  test   %al,%al
081e5dda +0x0fc:  je     081e5ded <+0x10f>
081e5ddc +0x0fe:  mov    -0x14(%ebp),%eax
081e5ddf +0x101:  movl   $0x17,0x4(%eax)
081e5de6 +0x108:  mov    $0x0,%eax
081e5deb +0x10d:  jmp    081e5e4b <+0x16d>
081e5ded +0x10f:  mov    -0x18(%ebp),%eax
081e5df0 +0x112:  movzwl 0xe(%eax),%edx
081e5df4 +0x116:  mov    -0x14(%ebp),%eax
081e5df7 +0x119:  mov    %dx,0x8(%eax)
081e5dfb +0x11d:  movb   $0x0,-0x9(%ebp)
081e5dff +0x121:  cmpb   $0x0,-0x9(%ebp)
081e5e03 +0x125:  je     081e5e46 <+0x168>
081e5e05 +0x127:  mov    -0x18(%ebp),%eax
081e5e08 +0x12a:  movzwl 0xe(%eax),%eax
081e5e0c +0x12e:  movzwl %ax,%ebx
081e5e0f +0x131:  mov    0xc(%ebp),%eax
081e5e12 +0x134:  mov    %eax,(%esp)
081e5e15 +0x137:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081e5e1a +0x13c:  movl   $0x1,0x14(%esp)
081e5e22 +0x144:  movl   $0x3,0x10(%esp)
081e5e2a +0x14c:  movl   $0x1,0xc(%esp)
081e5e32 +0x154:  mov    %ebx,0x8(%esp)
081e5e36 +0x158:  movl   $0x1,0x4(%esp)
081e5e3e +0x160:  mov    %eax,(%esp)
081e5e41 +0x163:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081e5e46 +0x168:  mov    $0x0,%eax
081e5e4b +0x16d:  mov    -0x4(%ebp),%ebx
081e5e4e +0x170:  leave
081e5e4f +0x171:  ret
```

## 反编译 C

```c
// Dispatcher_SeriaRoom_Deco_Event::process @ 0x81e5cde

/* WARNING: Removing unreachable block (ram,0x081e5e05) */
/* Dispatcher_SeriaRoom_Deco_Event::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SeriaRoom_Deco_Event::process
          (Dispatcher_SeriaRoom_Deco_Event *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3
          )

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CDataManager *this_00;
  undefined1 local_59 [2];
  int local_57;
  MSG_BASE *local_1c;
  ParamBase *local_18;
  int local_14;
  
  local_1c = param_2;
  local_18 = param_3;
  uVar2 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_18 + 4) = uVar2;
  if (*(int *)(local_18 + 4) < 1) {
    if (*(int *)(local_18 + 4) < 0) {
      uVar2 = LineFunc(0x6010,
                       "virtual int Dispatcher_SeriaRoom_Deco_Event::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_18 + 4),0);
    }
    else {
      iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_59,iVar3);
      this_00 = (CDataManager *)G_CDataManager();
      local_14 = CDataManager::find_item(this_00,local_57);
      if (local_14 == 0) {
        *(undefined4 *)(local_18 + 4) = 0x11;
        uVar2 = 0;
      }
      else {
        iVar3 = G_CDataManager();
        cVar1 = CDataManager::getVaildEventItem(iVar3);
        if (cVar1 == '\x01') {
          *(undefined2 *)(local_18 + 8) = *(undefined2 *)(local_1c + 0xe);
          uVar2 = 0;
        }
        else {
          *(undefined4 *)(local_18 + 4) = 0x17;
          uVar2 = 0;
        }
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

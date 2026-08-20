# process

`_ZN29Dispatcher_StackableActionUse7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_StackableActionUse::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_StackableActionUse` | `0x0825e11e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825e11e  _ZN29Dispatcher_StackableActionUse7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_StackableActionUse::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x0825e11e, 0x0825e331]
0825e11e +0x000:  push   %ebp
0825e11f +0x001:  mov    %esp,%ebp
0825e121 +0x003:  push   %esi
0825e122 +0x004:  push   %ebx
0825e123 +0x005:  add    $0xffffff80,%esp
0825e126 +0x008:  mov    0x10(%ebp),%eax
0825e129 +0x00b:  mov    %eax,-0x14(%ebp)
0825e12c +0x00e:  mov    0x14(%ebp),%eax
0825e12f +0x011:  mov    %eax,-0x10(%ebp)
0825e132 +0x014:  mov    0x10(%ebp),%eax
0825e135 +0x017:  mov    %eax,0x8(%esp)
0825e139 +0x01b:  mov    0xc(%ebp),%eax
0825e13c +0x01e:  mov    %eax,0x4(%esp)
0825e140 +0x022:  mov    0x8(%ebp),%eax
0825e143 +0x025:  mov    %eax,(%esp)
0825e146 +0x028:  call   0825e332 <_ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_StackableActionUse::check_error(CUser*, MSG_BASE&)
0825e14b +0x02d:  mov    -0x10(%ebp),%edx
0825e14e +0x030:  mov    %eax,0x4(%edx)
0825e151 +0x033:  mov    -0x14(%ebp),%eax
0825e154 +0x036:  movzbl 0xf(%eax),%edx
0825e158 +0x03a:  mov    -0x10(%ebp),%eax
0825e15b +0x03d:  mov    %dl,0xa(%eax)
0825e15e +0x040:  mov    -0x14(%ebp),%eax
0825e161 +0x043:  movzwl 0xd(%eax),%edx
0825e165 +0x047:  mov    -0x10(%ebp),%eax
0825e168 +0x04a:  mov    %dx,0x8(%eax)
0825e16c +0x04e:  mov    -0x10(%ebp),%eax
0825e16f +0x051:  mov    0x4(%eax),%eax
0825e172 +0x054:  test   %eax,%eax
0825e174 +0x056:  jle    0825e180 <+0x62>
0825e176 +0x058:  mov    $0x0,%eax
0825e17b +0x05d:  jmp    0825e328 <+0x20a>
0825e180 +0x062:  mov    -0x10(%ebp),%eax
0825e183 +0x065:  mov    0x4(%eax),%eax
0825e186 +0x068:  test   %eax,%eax
0825e188 +0x06a:  jns    0825e1e9 <+0xcb>
0825e18a +0x06c:  mov    -0x10(%ebp),%eax
0825e18d +0x06f:  mov    0x4(%eax),%eax
0825e190 +0x072:  mov    %eax,0x14(%esp)
0825e194 +0x076:  movl   $"Dispatcher Check_Error No(%d)",0x10(%esp)
0825e19c +0x07e:  movl   $0x11f,0xc(%esp)
0825e1a4 +0x086:  movl   $&_ZZN29Dispatcher_StackableActionUse7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x8(%esp)
0825e1ac +0x08e:  movl   $"PacketDispatcher_Impl_2.cpp",0x4(%esp)
0825e1b4 +0x096:  movl   $0x1,(%esp)
0825e1bb +0x09d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0825e1c0 +0x0a2:  movl   $0x0,0xc(%esp)
0825e1c8 +0x0aa:  movl   $0x0,0x8(%esp)
0825e1d0 +0x0b2:  movl   $&_ZZN29Dispatcher_StackableActionUse7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
0825e1d8 +0x0ba:  movl   $0x120,(%esp)
0825e1df +0x0c1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825e1e4 +0x0c6:  jmp    0825e328 <+0x20a>
0825e1e9 +0x0cb:  mov    -0x14(%ebp),%eax
0825e1ec +0x0ce:  movzwl 0xd(%eax),%eax
0825e1f0 +0x0d2:  movswl %ax,%ebx
0825e1f3 +0x0d5:  mov    0xc(%ebp),%eax
0825e1f6 +0x0d8:  mov    %eax,(%esp)
0825e1f9 +0x0db:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0825e1fe +0x0e0:  lea    -0x61(%ebp),%edx
0825e201 +0x0e3:  mov    %ebx,0xc(%esp)
0825e205 +0x0e7:  movl   $0x1,0x8(%esp)
0825e20d +0x0ef:  mov    %eax,0x4(%esp)
0825e211 +0x0f3:  mov    %edx,(%esp)
0825e214 +0x0f6:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0825e219 +0x0fb:  sub    $0x4,%esp
0825e21c +0x0fe:  mov    -0x5f(%ebp),%eax
0825e21f +0x101:  mov    %eax,%ebx
0825e221 +0x103:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0825e226 +0x108:  mov    %ebx,0x4(%esp)
0825e22a +0x10c:  mov    %eax,(%esp)
0825e22d +0x10f:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0825e232 +0x114:  mov    %eax,-0xc(%ebp)
0825e235 +0x117:  cmpl   $0x0,-0xc(%ebp)
0825e239 +0x11b:  jne    0825e24f <+0x131>
0825e23b +0x11d:  mov    -0x10(%ebp),%eax
0825e23e +0x120:  movl   $0x11,0x4(%eax)
0825e245 +0x127:  mov    $0x0,%eax
0825e24a +0x12c:  jmp    0825e328 <+0x20a>
0825e24f +0x131:  mov    0xc(%ebp),%eax
0825e252 +0x134:  mov    %eax,-0x1c(%ebp)
0825e255 +0x137:  mov    -0xc(%ebp),%eax
0825e258 +0x13a:  mov    %eax,-0x18(%ebp)
0825e25b +0x13d:  mov    -0x14(%ebp),%eax
0825e25e +0x140:  movzbl 0x14(%eax),%eax
0825e262 +0x144:  movsbl %al,%edx
0825e265 +0x147:  mov    &_ZN10GlobalData9g_ActionsE,%eax
0825e26a +0x14c:  lea    -0x24(%ebp),%ecx
0825e26d +0x14f:  mov    %ecx,0x8(%esp)
0825e271 +0x153:  mov    %edx,0x4(%esp)
0825e275 +0x157:  mov    %eax,(%esp)
0825e278 +0x15a:  call   0827fa26 <_ZN15StackableAction6Action5checkEiRNS_11input_paramE>  ; StackableAction::Action::check(int, StackableAction::input_param&)
0825e27d +0x15f:  mov    -0x10(%ebp),%edx
0825e280 +0x162:  mov    %eax,0x4(%edx)
0825e283 +0x165:  mov    -0x10(%ebp),%eax
0825e286 +0x168:  mov    0x4(%eax),%eax
0825e289 +0x16b:  test   %eax,%eax
0825e28b +0x16d:  jne    0825e323 <+0x205>
0825e291 +0x173:  mov    -0x14(%ebp),%eax
0825e294 +0x176:  movzbl 0x14(%eax),%eax
0825e298 +0x17a:  movsbl %al,%edx
0825e29b +0x17d:  mov    &_ZN10GlobalData9g_ActionsE,%eax
0825e2a0 +0x182:  lea    -0x24(%ebp),%ecx
0825e2a3 +0x185:  mov    %ecx,0x8(%esp)
0825e2a7 +0x189:  mov    %edx,0x4(%esp)
0825e2ab +0x18d:  mov    %eax,(%esp)
0825e2ae +0x190:  call   0827fa9a <_ZN15StackableAction6Action3runEiRNS_11input_paramE>  ; StackableAction::Action::run(int, StackableAction::input_param&)
0825e2b3 +0x195:  mov    -0x10(%ebp),%edx
0825e2b6 +0x198:  mov    %eax,0x4(%edx)
0825e2b9 +0x19b:  mov    -0x10(%ebp),%eax
0825e2bc +0x19e:  mov    0x4(%eax),%eax
0825e2bf +0x1a1:  test   %eax,%eax
0825e2c1 +0x1a3:  jne    0825e323 <+0x205>
0825e2c3 +0x1a5:  mov    -0x14(%ebp),%eax
0825e2c6 +0x1a8:  movzbl 0xf(%eax),%eax
0825e2ca +0x1ac:  movsbl %al,%esi
0825e2cd +0x1af:  mov    -0x14(%ebp),%eax
0825e2d0 +0x1b2:  movzwl 0xd(%eax),%eax
0825e2d4 +0x1b6:  movswl %ax,%ebx
0825e2d7 +0x1b9:  mov    0xc(%ebp),%eax
0825e2da +0x1bc:  mov    %eax,(%esp)
0825e2dd +0x1bf:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0825e2e2 +0x1c4:  mov    %esi,0xc(%esp)
0825e2e6 +0x1c8:  movl   $0x1,0x8(%esp)
0825e2ee +0x1d0:  mov    %ebx,0x4(%esp)
0825e2f2 +0x1d4:  mov    %eax,(%esp)
0825e2f5 +0x1d7:  call   084ff8de <_ZN10CInventory8use_itemEiii>  ; CInventory::use_item(int, int, int)
0825e2fa +0x1dc:  mov    -0x10(%ebp),%edx
0825e2fd +0x1df:  mov    %eax,0x4(%edx)
0825e300 +0x1e2:  mov    -0x10(%ebp),%eax
0825e303 +0x1e5:  mov    0x4(%eax),%eax
0825e306 +0x1e8:  test   %eax,%eax
0825e308 +0x1ea:  jne    0825e323 <+0x205>
0825e30a +0x1ec:  mov    -0xc(%ebp),%edx
0825e30d +0x1ef:  mov    -0x5f(%ebp),%eax
0825e310 +0x1f2:  mov    %edx,0x8(%esp)
0825e314 +0x1f6:  mov    %eax,0x4(%esp)
0825e318 +0x1fa:  mov    0xc(%ebp),%eax
0825e31b +0x1fd:  mov    %eax,(%esp)
0825e31e +0x200:  call   0865ea62 <_ZN5CUser22_processContinuousItemEjP14CStackableItem>  ; CUser::_processContinuousItem(unsigned int, CStackableItem*)
0825e323 +0x205:  mov    $0x0,%eax
0825e328 +0x20a:  lea    -0x8(%ebp),%esp
0825e32b +0x20d:  add    $0x0,%esp
0825e32e +0x210:  pop    %ebx
0825e32f +0x211:  pop    %esi
0825e330 +0x212:  pop    %ebp
0825e331 +0x213:  ret
```

## 反编译 C

```c
// Dispatcher_StackableActionUse::process @ 0x825e11e

/* Dispatcher_StackableActionUse::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_StackableActionUse::process
          (Dispatcher_StackableActionUse *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  CDataManager *this_00;
  CInventory *this_01;
  undefined1 local_65 [2];
  uint local_63;
  input_param local_28 [8];
  CUser *local_20;
  CStackableItem *local_1c;
  MSG_BASE *local_18;
  ParamBase *local_14;
  CStackableItem *local_10;
  
  local_18 = param_2;
  local_14 = param_3;
  uVar4 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_14 + 4) = uVar4;
  *(MSG_BASE *)(local_14 + 10) = local_18[0xf];
  *(undefined2 *)(local_14 + 8) = *(undefined2 *)(local_18 + 0xd);
  if (*(int *)(local_14 + 4) < 1) {
    if (*(int *)(local_14 + 4) < 0) {
      LogManager::logFormat
                (1,"PacketDispatcher_Impl_2.cpp",
                 "virtual int Dispatcher_StackableActionUse::process(CUser*, MSG_BASE&, ParamBase&)"
                 ,0x11f,"Dispatcher Check_Error No(%d)",*(undefined4 *)(local_14 + 4));
      uVar4 = LineFunc(0x120,
                       "virtual int Dispatcher_StackableActionUse::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,0,0);
    }
    else {
      iVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_65,iVar5);
      uVar3 = local_63;
      this_00 = (CDataManager *)G_CDataManager();
      local_1c = (CStackableItem *)CDataManager::find_item(this_00,uVar3);
      if (local_1c == (CStackableItem *)0x0) {
        *(undefined4 *)(local_14 + 4) = 0x11;
        uVar4 = 0;
      }
      else {
        local_20 = param_1;
        local_10 = local_1c;
        uVar4 = StackableAction::Action::check
                          (GlobalData::g_Actions,(int)(char)local_18[0x14],local_28);
        *(undefined4 *)(local_14 + 4) = uVar4;
        if (*(int *)(local_14 + 4) == 0) {
          uVar4 = StackableAction::Action::run
                            (GlobalData::g_Actions,(int)(char)local_18[0x14],local_28);
          *(undefined4 *)(local_14 + 4) = uVar4;
          if (*(int *)(local_14 + 4) == 0) {
            MVar1 = local_18[0xf];
            sVar2 = *(short *)(local_18 + 0xd);
            this_01 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            uVar4 = CInventory::use_item(this_01,(int)sVar2,1,(int)(char)MVar1);
            *(undefined4 *)(local_14 + 4) = uVar4;
            if (*(int *)(local_14 + 4) == 0) {
              CUser::_processContinuousItem(param_1,local_63,local_10);
            }
          }
        }
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```

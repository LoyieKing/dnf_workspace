# process

`_ZN30Dispatcher_CreateDisjointStore7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_CreateDisjointStore::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CreateDisjointStore` | `0x081cf986` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cf986  _ZN30Dispatcher_CreateDisjointStore7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_CreateDisjointStore::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cf986, 0x081cfaef]
081cf986 +0x000:  push   %ebp
081cf987 +0x001:  mov    %esp,%ebp
081cf989 +0x003:  push   %ebx
081cf98a +0x004:  sub    $0x34,%esp
081cf98d +0x007:  mov    0x14(%ebp),%eax
081cf990 +0x00a:  mov    %eax,-0x18(%ebp)
081cf993 +0x00d:  mov    0x14(%ebp),%eax
081cf996 +0x010:  mov    %eax,0xc(%esp)
081cf99a +0x014:  mov    0x10(%ebp),%eax
081cf99d +0x017:  mov    %eax,0x8(%esp)
081cf9a1 +0x01b:  mov    0xc(%ebp),%eax
081cf9a4 +0x01e:  mov    %eax,0x4(%esp)
081cf9a8 +0x022:  mov    0x8(%ebp),%eax
081cf9ab +0x025:  mov    %eax,(%esp)
081cf9ae +0x028:  call   081cf8d4 <_ZN30Dispatcher_CreateDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_CreateDisjointStore::check_error(CUser*, MSG_BASE&, ParamBase&)
081cf9b3 +0x02d:  mov    %eax,%edx
081cf9b5 +0x02f:  mov    -0x18(%ebp),%eax
081cf9b8 +0x032:  mov    %edx,0x4(%eax)
081cf9bb +0x035:  mov    -0x18(%ebp),%eax
081cf9be +0x038:  mov    0x4(%eax),%eax
081cf9c1 +0x03b:  test   %eax,%eax
081cf9c3 +0x03d:  jle    081cf9cf <+0x49>
081cf9c5 +0x03f:  mov    $0x0,%eax
081cf9ca +0x044:  jmp    081cfaea <+0x164>
081cf9cf +0x049:  mov    -0x18(%ebp),%eax
081cf9d2 +0x04c:  mov    0x4(%eax),%eax
081cf9d5 +0x04f:  test   %eax,%eax
081cf9d7 +0x051:  jns    081cfa0b <+0x85>
081cf9d9 +0x053:  mov    0xc(%ebp),%eax
081cf9dc +0x056:  mov    %eax,(%esp)
081cf9df +0x059:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cf9e4 +0x05e:  mov    -0x18(%ebp),%edx
081cf9e7 +0x061:  mov    0x4(%edx),%edx
081cf9ea +0x064:  mov    %eax,0xc(%esp)
081cf9ee +0x068:  mov    %edx,0x8(%esp)
081cf9f2 +0x06c:  movl   $&_ZZN30Dispatcher_CreateDisjointStore7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081cf9fa +0x074:  movl   $0x29c4,(%esp)
081cfa01 +0x07b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cfa06 +0x080:  jmp    081cfaea <+0x164>
081cfa0b +0x085:  mov    &_ZN10GlobalData14s_ExpertJobMgrE,%eax
081cfa10 +0x08a:  movl   $0x3,0x4(%esp)
081cfa18 +0x092:  mov    %eax,(%esp)
081cfa1b +0x095:  call   0849e1dc <_ZN10expert_job13CExpertJobMgr16AcquireExpertJobE20ENUM_EXPERT_JOB_TYPE>  ; expert_job::CExpertJobMgr::AcquireExpertJob(ENUM_EXPERT_JOB_TYPE)
081cfa20 +0x09a:  mov    %eax,-0x14(%ebp)
081cfa23 +0x09d:  cmpl   $0x0,-0x14(%ebp)
081cfa27 +0x0a1:  jne    081cfa3d <+0xb7>
081cfa29 +0x0a3:  mov    -0x18(%ebp),%eax
081cfa2c +0x0a6:  movl   $0x15,0x4(%eax)
081cfa33 +0x0ad:  mov    $0x0,%eax
081cfa38 +0x0b2:  jmp    081cfaea <+0x164>
081cfa3d +0x0b7:  mov    0x10(%ebp),%eax
081cfa40 +0x0ba:  mov    %eax,-0x10(%ebp)
081cfa43 +0x0bd:  mov    -0x14(%ebp),%edx
081cfa46 +0x0c0:  mov    0xc(%ebp),%eax
081cfa49 +0x0c3:  mov    %edx,0x4(%esp)
081cfa4d +0x0c7:  mov    %eax,(%esp)
081cfa50 +0x0ca:  call   0822f8b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f60>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f60
081cfa55 +0x0cf:  movl   $0x0,-0xc(%ebp)
081cfa5c +0x0d6:  mov    -0x10(%ebp),%eax
081cfa5f +0x0d9:  movzwl 0x11a(%eax),%eax
081cfa66 +0x0e0:  movswl %ax,%ecx
081cfa69 +0x0e3:  mov    -0x10(%ebp),%eax
081cfa6c +0x0e6:  movzwl 0x118(%eax),%eax
081cfa73 +0x0ed:  movswl %ax,%edx
081cfa76 +0x0f0:  mov    -0x10(%ebp),%eax
081cfa79 +0x0f3:  mov    0x114(%eax),%eax
081cfa7f +0x0f9:  mov    -0x10(%ebp),%ebx
081cfa82 +0x0fc:  add    $0xd,%ebx
081cfa85 +0x0ff:  mov    %ecx,0x14(%esp)
081cfa89 +0x103:  mov    %edx,0x10(%esp)
081cfa8d +0x107:  mov    %eax,0xc(%esp)
081cfa91 +0x10b:  mov    %ebx,0x8(%esp)
081cfa95 +0x10f:  mov    0xc(%ebp),%eax
081cfa98 +0x112:  mov    %eax,0x4(%esp)
081cfa9c +0x116:  mov    -0x14(%ebp),%eax
081cfa9f +0x119:  mov    %eax,(%esp)
081cfaa2 +0x11c:  call   085d2d08 <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii>  ; expert_job::CDisjointer::OnCreateDisjointStore(CUser*, char const*, int, int, int)
081cfaa7 +0x121:  mov    %eax,-0xc(%ebp)
081cfaaa +0x124:  cmpl   $0x0,-0xc(%ebp)
081cfaae +0x128:  setne  %al
081cfab1 +0x12b:  test   %al,%al
081cfab3 +0x12d:  je     081cfae5 <+0x15f>
081cfab5 +0x12f:  mov    0xc(%ebp),%eax
081cfab8 +0x132:  movl   $0x0,0x4(%esp)
081cfac0 +0x13a:  mov    %eax,(%esp)
081cfac3 +0x13d:  call   0822f8b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f60>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f60
081cfac8 +0x142:  mov    -0x14(%ebp),%edx
081cfacb +0x145:  mov    &_ZN10GlobalData14s_ExpertJobMgrE,%eax
081cfad0 +0x14a:  mov    %edx,0x4(%esp)
081cfad4 +0x14e:  mov    %eax,(%esp)
081cfad7 +0x151:  call   0849e1f8 <_ZN10expert_job13CExpertJobMgr13FreeExpertJobEPNS_10CExpertJobE>  ; expert_job::CExpertJobMgr::FreeExpertJob(expert_job::CExpertJob*)
081cfadc +0x156:  mov    -0xc(%ebp),%edx
081cfadf +0x159:  mov    -0x18(%ebp),%eax
081cfae2 +0x15c:  mov    %edx,0x4(%eax)
081cfae5 +0x15f:  mov    $0x0,%eax
081cfaea +0x164:  add    $0x34,%esp
081cfaed +0x167:  pop    %ebx
081cfaee +0x168:  pop    %ebp
081cfaef +0x169:  ret
```

## 反编译 C

```c
// Dispatcher_CreateDisjointStore::process @ 0x81cf986

/* Dispatcher_CreateDisjointStore::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_CreateDisjointStore::process
          (Dispatcher_CreateDisjointStore *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CDisjointer *this_00;
  int iVar3;
  MSG_BASE *pMVar4;
  ParamBase *pPVar5;
  
  pMVar4 = param_2;
  pPVar5 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x29c4,
                       "virtual int Dispatcher_CreateDisjointStore::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar2);
    }
    else {
      this_00 = (CDisjointer *)
                expert_job::CExpertJobMgr::AcquireExpertJob
                          (GlobalData::s_ExpertJobMgr,3,pMVar4,pPVar5);
      if (this_00 == (CDisjointer *)0x0) {
        *(undefined4 *)(param_3 + 4) = 0x15;
        uVar1 = 0;
      }
      else {
        CUserCharacInfo::SetCurCharacExpertJob((CUserCharacInfo *)param_1,(CExpertJob *)this_00);
        iVar3 = expert_job::CDisjointer::OnCreateDisjointStore
                          (this_00,param_1,(char *)(param_2 + 0xd),*(int *)(param_2 + 0x114),
                           (int)*(short *)(param_2 + 0x118),(int)*(short *)(param_2 + 0x11a));
        if (iVar3 != 0) {
          CUserCharacInfo::SetCurCharacExpertJob((CUserCharacInfo *)param_1,(CExpertJob *)0x0);
          expert_job::CExpertJobMgr::FreeExpertJob(GlobalData::s_ExpertJobMgr,(CExpertJob *)this_00)
          ;
          *(int *)(param_3 + 4) = iVar3;
        }
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```

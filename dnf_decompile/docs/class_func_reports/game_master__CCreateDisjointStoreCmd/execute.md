# execute

`_ZN11game_master23CCreateDisjointStoreCmd7executeEv`

`game_master::CCreateDisjointStoreCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CCreateDisjointStoreCmd` | `0x084a9720` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a9720  _ZN11game_master23CCreateDisjointStoreCmd7executeEv
#           game_master::CCreateDisjointStoreCmd::execute()
# range [0x084a9720, 0x084a97bf]
084a9720 +0x00:  push   %ebp
084a9721 +0x01:  mov    %esp,%ebp
084a9723 +0x03:  push   %esi
084a9724 +0x04:  push   %ebx
084a9725 +0x05:  sub    $0x30,%esp
084a9728 +0x08:  mov    &_ZN10GlobalData14s_ExpertJobMgrE,%eax
084a972d +0x0d:  movl   $0x3,0x4(%esp)
084a9735 +0x15:  mov    %eax,(%esp)
084a9738 +0x18:  call   0849e1dc <_ZN10expert_job13CExpertJobMgr16AcquireExpertJobE20ENUM_EXPERT_JOB_TYPE>  ; expert_job::CExpertJobMgr::AcquireExpertJob(ENUM_EXPERT_JOB_TYPE)
084a973d +0x1d:  mov    %eax,-0xc(%ebp)
084a9740 +0x20:  mov    -0xc(%ebp),%ebx
084a9743 +0x23:  mov    0x8(%ebp),%eax
084a9746 +0x26:  mov    %eax,(%esp)
084a9749 +0x29:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a974e +0x2e:  mov    %ebx,0x4(%esp)
084a9752 +0x32:  mov    %eax,(%esp)
084a9755 +0x35:  call   0822f8b6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f60>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f60
084a975a +0x3a:  mov    0x8(%ebp),%eax
084a975d +0x3d:  mov    %eax,(%esp)
084a9760 +0x40:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a9765 +0x45:  mov    %eax,(%esp)
084a9768 +0x48:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
084a976d +0x4d:  movzwl %ax,%esi
084a9770 +0x50:  mov    0x8(%ebp),%eax
084a9773 +0x53:  mov    %eax,(%esp)
084a9776 +0x56:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a977b +0x5b:  mov    %eax,(%esp)
084a977e +0x5e:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
084a9783 +0x63:  movzwl %ax,%ebx
084a9786 +0x66:  mov    0x8(%ebp),%eax
084a9789 +0x69:  mov    %eax,(%esp)
084a978c +0x6c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a9791 +0x71:  mov    %esi,0x14(%esp)
084a9795 +0x75:  mov    %ebx,0x10(%esp)
084a9799 +0x79:  movl   $0x1f4,0xc(%esp)
084a97a1 +0x81:  movl   $"test",0x8(%esp)
084a97a9 +0x89:  mov    %eax,0x4(%esp)
084a97ad +0x8d:  mov    -0xc(%ebp),%eax
084a97b0 +0x90:  mov    %eax,(%esp)
084a97b3 +0x93:  call   085d2d08 <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii>  ; expert_job::CDisjointer::OnCreateDisjointStore(CUser*, char const*, int, int, int)
084a97b8 +0x98:  add    $0x30,%esp
084a97bb +0x9b:  pop    %ebx
084a97bc +0x9c:  pop    %esi
084a97bd +0x9d:  pop    %ebp
084a97be +0x9e:  ret
084a97bf +0x9f:  nop
```

## 反编译 C

```c
// game_master::CCreateDisjointStoreCmd::execute @ 0x84a9720

/* game_master::CCreateDisjointStoreCmd::execute() */

void __thiscall game_master::CCreateDisjointStoreCmd::execute(CCreateDisjointStoreCmd *this)

{
  CDisjointer *this_00;
  CUserCharacInfo *this_01;
  CUser *pCVar1;
  uint uVar2;
  uint uVar3;
  
  this_00 = (CDisjointer *)expert_job::CExpertJobMgr::AcquireExpertJob(GlobalData::s_ExpertJobMgr,3)
  ;
  this_01 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  CUserCharacInfo::SetCurCharacExpertJob(this_01,(CExpertJob *)this_00);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  uVar2 = CUser::get_posY(pCVar1);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  uVar3 = CUser::get_posX(pCVar1);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  expert_job::CDisjointer::OnCreateDisjointStore
            (this_00,pCVar1,"test",500,uVar3 & 0xffff,uVar2 & 0xffff);
  return;
}
```

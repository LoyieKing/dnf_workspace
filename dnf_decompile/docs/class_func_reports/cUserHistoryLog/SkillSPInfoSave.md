# SkillSPInfoSave

`_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason`

`cUserHistoryLog::SkillSPInfoSave(CUser*, eSkillSPInfoSaveReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686188` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686188  _ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason
#           cUserHistoryLog::SkillSPInfoSave(CUser*, eSkillSPInfoSaveReason)
# range [0x08686188, 0x086863b5]
08686188 +0x000:  push   %ebp
08686189 +0x001:  mov    %esp,%ebp
0868618b +0x003:  push   %edi
0868618c +0x004:  push   %esi
0868618d +0x005:  push   %ebx
0868618e +0x006:  sub    $0x1dc,%esp
08686194 +0x00c:  lea    -0x1bc(%ebp),%eax
0868619a +0x012:  mov    %eax,(%esp)
0868619d +0x015:  call   08234fbe <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa668>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa668
086861a2 +0x01a:  movl   $0x0,0x8(%esp)
086861aa +0x022:  mov    0xc(%ebp),%eax
086861ad +0x025:  mov    %eax,0x4(%esp)
086861b1 +0x029:  lea    -0x1bc(%ebp),%eax
086861b7 +0x02f:  mov    %eax,(%esp)
086861ba +0x032:  call   0860a1e6 <_ZN8WongWork13CSkillChanger19GetCurCharacTotalSPEPK5CUserb>  ; WongWork::CSkillChanger::GetCurCharacTotalSP(CUser const*, bool)
086861bf +0x037:  mov    %eax,-0x28(%ebp)
086861c2 +0x03a:  lea    -0xa8(%ebp),%ebx
086861c8 +0x040:  mov    $0x0,%eax
086861cd +0x045:  mov    $0x20,%edx
086861d2 +0x04a:  mov    %ebx,%edi
086861d4 +0x04c:  mov    %edx,%ecx
086861d6 +0x04e:  rep stos %eax,%es:(%edi)
086861d8 +0x050:  lea    -0x128(%ebp),%ebx
086861de +0x056:  mov    $0x0,%eax
086861e3 +0x05b:  mov    $0x20,%edx
086861e8 +0x060:  mov    %ebx,%edi
086861ea +0x062:  mov    %edx,%ecx
086861ec +0x064:  rep stos %eax,%es:(%edi)
086861ee +0x066:  cmpl   $0x0,0xc(%ebp)
086861f2 +0x06a:  je     0868620b <+0x83>
086861f4 +0x06c:  mov    0xc(%ebp),%eax
086861f7 +0x06f:  mov    %eax,(%esp)
086861fa +0x072:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
086861ff +0x077:  cmp    $0xffffffff,%eax
08686202 +0x07a:  jne    0868620b <+0x83>
08686204 +0x07c:  mov    $0x1,%eax
08686209 +0x081:  jmp    08686210 <+0x88>
0868620b +0x083:  mov    $0x0,%eax
08686210 +0x088:  test   %al,%al
08686212 +0x08a:  je     08686293 <+0x10b>
08686214 +0x08c:  mov    0xc(%ebp),%eax
08686217 +0x08f:  mov    %eax,(%esp)
0868621a +0x092:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0868621f +0x097:  movl   $0x0,0x4(%esp)
08686227 +0x09f:  mov    %eax,(%esp)
0868622a +0x0a2:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
0868622f +0x0a7:  mov    %eax,-0x24(%ebp)
08686232 +0x0aa:  cmpl   $0x0,-0x28(%ebp)
08686236 +0x0ae:  js     0868639d <+0x215>
0868623c +0x0b4:  cmpl   $0x0,-0x24(%ebp)
08686240 +0x0b8:  js     0868639d <+0x215>
08686246 +0x0be:  mov    0x10(%ebp),%eax
08686249 +0x0c1:  movl   $0xffffffff,0x14(%esp)
08686251 +0x0c9:  mov    -0x28(%ebp),%edx
08686254 +0x0cc:  mov    %edx,0x10(%esp)
08686258 +0x0d0:  mov    -0x24(%ebp),%edx
0868625b +0x0d3:  mov    %edx,0xc(%esp)
0868625f +0x0d7:  mov    %eax,0x8(%esp)
08686263 +0x0db:  movl   $"SkillSPInfo,%d,%d,%d,%d",0x4(%esp)
0868626b +0x0e3:  lea    -0xa8(%ebp),%eax
08686271 +0x0e9:  mov    %eax,(%esp)
08686274 +0x0ec:  call   0807e440 <_init+0xd38>
08686279 +0x0f1:  lea    -0xa8(%ebp),%eax
0868627f +0x0f7:  mov    %eax,0x4(%esp)
08686283 +0x0fb:  mov    0xc(%ebp),%eax
08686286 +0x0fe:  mov    %eax,(%esp)
08686289 +0x101:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868628e +0x106:  jmp    0868639d <+0x215>
08686293 +0x10b:  mov    0xc(%ebp),%eax
08686296 +0x10e:  mov    %eax,(%esp)
08686299 +0x111:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0868629e +0x116:  movl   $0x0,0x4(%esp)
086862a6 +0x11e:  mov    %eax,(%esp)
086862a9 +0x121:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
086862ae +0x126:  mov    %eax,-0x20(%ebp)
086862b1 +0x129:  mov    0xc(%ebp),%eax
086862b4 +0x12c:  mov    %eax,(%esp)
086862b7 +0x12f:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
086862bc +0x134:  movl   $0x1,0x4(%esp)
086862c4 +0x13c:  mov    %eax,(%esp)
086862c7 +0x13f:  call   08603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_remain_sp_at_index(ENUM_SKILL_TREE_KIND) const
086862cc +0x144:  mov    %eax,-0x1c(%ebp)
086862cf +0x147:  cmpl   $0x0,-0x28(%ebp)
086862d3 +0x14b:  js     0868639d <+0x215>
086862d9 +0x151:  cmpl   $0x0,-0x20(%ebp)
086862dd +0x155:  js     0868639d <+0x215>
086862e3 +0x15b:  cmpl   $0x0,-0x1c(%ebp)
086862e7 +0x15f:  jne    0868639d <+0x215>
086862ed +0x165:  mov    0x10(%ebp),%eax
086862f0 +0x168:  movl   $0x0,0x14(%esp)
086862f8 +0x170:  mov    -0x28(%ebp),%edx
086862fb +0x173:  mov    %edx,0x10(%esp)
086862ff +0x177:  mov    -0x20(%ebp),%edx
08686302 +0x17a:  mov    %edx,0xc(%esp)
08686306 +0x17e:  mov    %eax,0x8(%esp)
0868630a +0x182:  movl   $"SkillSPInfo,%d,%d,%d,%d",0x4(%esp)
08686312 +0x18a:  lea    -0xa8(%ebp),%eax
08686318 +0x190:  mov    %eax,(%esp)
0868631b +0x193:  call   0807e440 <_init+0xd38>
08686320 +0x198:  lea    -0xa8(%ebp),%eax
08686326 +0x19e:  mov    %eax,0x4(%esp)
0868632a +0x1a2:  mov    0xc(%ebp),%eax
0868632d +0x1a5:  mov    %eax,(%esp)
08686330 +0x1a8:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686335 +0x1ad:  mov    0x10(%ebp),%eax
08686338 +0x1b0:  movl   $0x1,0x14(%esp)
08686340 +0x1b8:  mov    -0x28(%ebp),%edx
08686343 +0x1bb:  mov    %edx,0x10(%esp)
08686347 +0x1bf:  mov    -0x1c(%ebp),%edx
0868634a +0x1c2:  mov    %edx,0xc(%esp)
0868634e +0x1c6:  mov    %eax,0x8(%esp)
08686352 +0x1ca:  movl   $"SkillSPInfo,%d,%d,%d,%d",0x4(%esp)
0868635a +0x1d2:  lea    -0x128(%ebp),%eax
08686360 +0x1d8:  mov    %eax,(%esp)
08686363 +0x1db:  call   0807e440 <_init+0xd38>
08686368 +0x1e0:  lea    -0x128(%ebp),%eax
0868636e +0x1e6:  mov    %eax,0x4(%esp)
08686372 +0x1ea:  mov    0xc(%ebp),%eax
08686375 +0x1ed:  mov    %eax,(%esp)
08686378 +0x1f0:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868637d +0x1f5:  jmp    0868639d <+0x215>
0868637f +0x1f7:  mov    %edx,%ebx
08686381 +0x1f9:  mov    %eax,%esi
08686383 +0x1fb:  lea    -0x1bc(%ebp),%eax
08686389 +0x201:  mov    %eax,(%esp)
0868638c +0x204:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
08686391 +0x209:  mov    %esi,%eax
08686393 +0x20b:  mov    %ebx,%edx
08686395 +0x20d:  mov    %eax,(%esp)
08686398 +0x210:  call   08ae3750 <_Unwind_Resume>
0868639d +0x215:  lea    -0x1bc(%ebp),%eax
086863a3 +0x21b:  mov    %eax,(%esp)
086863a6 +0x21e:  call   08234fc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa66e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa66e
086863ab +0x223:  add    $0x1dc,%esp
086863b1 +0x229:  pop    %ebx
086863b2 +0x22a:  pop    %esi
086863b3 +0x22b:  pop    %edi
086863b4 +0x22c:  pop    %ebp
086863b5 +0x22d:  ret
```

## 反编译 C

```c
// cUserHistoryLog::SkillSPInfoSave @ 0x8686188

/* cUserHistoryLog::SkillSPInfoSave(CUser*, eSkillSPInfoSaveReason) */

void __thiscall
cUserHistoryLog::SkillSPInfoSave(undefined4 this,CUserCharacInfo *param_1,undefined4 param_3)

{
  bool bVar1;
  SkillSlot *pSVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  CSkillChanger local_1c0 [148];
  char local_12c [128];
  char local_ac [128];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  bVar5 = 0;
  WongWork::CSkillChanger::CSkillChanger(local_1c0);
                    /* try { // try from 086861ba to 0868637c has its CatchHandler @ 0868637f */
  local_2c = WongWork::CSkillChanger::GetCurCharacTotalSP(local_1c0,(CUser *)param_1,false);
  pcVar4 = local_ac;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  pcVar4 = local_12c;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  if (param_1 != (CUserCharacInfo *)0x0) {
    iVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(param_1);
    if (iVar3 == -1) {
      bVar1 = true;
      goto LAB_08686210;
    }
  }
  bVar1 = false;
LAB_08686210:
  if (bVar1) {
    pSVar2 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR(param_1);
    local_28 = SkillSlot::get_remain_sp_at_index(pSVar2,0);
    if ((-1 < local_2c) && (-1 < local_28)) {
      sprintf(local_ac,"SkillSPInfo,%d,%d,%d,%d",param_3,local_28,local_2c,0xffffffff);
      CUser::LogHistory((CUser *)param_1,local_ac);
    }
  }
  else {
    pSVar2 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR(param_1);
    local_24 = SkillSlot::get_remain_sp_at_index(pSVar2,0);
    pSVar2 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR(param_1);
    local_20 = SkillSlot::get_remain_sp_at_index(pSVar2,1);
    if (((-1 < local_2c) && (-1 < local_24)) && (local_20 == 0)) {
      sprintf(local_ac,"SkillSPInfo,%d,%d,%d,%d",param_3,local_24,local_2c,0);
      CUser::LogHistory((CUser *)param_1,local_ac);
      sprintf(local_12c,"SkillSPInfo,%d,%d,%d,%d",param_3,local_20,local_2c,1);
      CUser::LogHistory((CUser *)param_1,local_12c);
    }
  }
  WongWork::CSkillChanger::~CSkillChanger(local_1c0);
  return;
}
```

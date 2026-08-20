# growtype_skill

`_ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND`

`SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086040bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086040bc  _ZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KIND
#           SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)
# range [0x086040bc, 0x08604323]
086040bc +0x000:  push   %ebp
086040bd +0x001:  mov    %esp,%ebp
086040bf +0x003:  push   %ebx
086040c0 +0x004:  sub    $0x34,%esp
086040c3 +0x007:  movl   $0x0,-0x18(%ebp)
086040ca +0x00e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086040cf +0x013:  mov    0x10(%ebp),%edx
086040d2 +0x016:  mov    %edx,0x8(%esp)
086040d6 +0x01a:  mov    0xc(%ebp),%edx
086040d9 +0x01d:  mov    %edx,0x4(%esp)
086040dd +0x021:  mov    %eax,(%esp)
086040e0 +0x024:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
086040e5 +0x029:  mov    %eax,-0x18(%ebp)
086040e8 +0x02c:  cmpl   $0x0,-0x18(%ebp)
086040ec +0x030:  jne    08604132 <+0x76>
086040ee +0x032:  mov    0x10(%ebp),%eax
086040f1 +0x035:  mov    %eax,0x18(%esp)
086040f5 +0x039:  mov    0xc(%ebp),%eax
086040f8 +0x03c:  mov    %eax,0x14(%esp)
086040fc +0x040:  movl   $"G_CDataManager()->find_skill( %d, %d )",0x10(%esp)
08604104 +0x048:  movl   $0x20b,0xc(%esp)
0860410c +0x050:  movl   $&_ZZN9SkillSlot14growtype_skillEiii20ENUM_SKILL_TREE_KINDE19__PRETTY_FUNCTION__,0x8(%esp)
08604114 +0x058:  movl   $"skill_slot.cpp",0x4(%esp)
0860411c +0x060:  movl   $0x1,(%esp)
08604123 +0x067:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08604128 +0x06c:  mov    $0xffffffff,%eax
0860412d +0x071:  jmp    0860431e <+0x262>
08604132 +0x076:  mov    0x8(%ebp),%eax
08604135 +0x079:  mov    (%eax),%eax
08604137 +0x07b:  test   %eax,%eax
08604139 +0x07d:  jne    08604145 <+0x89>
0860413b +0x07f:  mov    $0xffffffff,%eax
08604140 +0x084:  jmp    0860431e <+0x262>
08604145 +0x089:  mov    0x18(%ebp),%eax
08604148 +0x08c:  mov    %eax,0x4(%esp)
0860414c +0x090:  mov    0x8(%ebp),%eax
0860414f +0x093:  mov    %eax,(%esp)
08604152 +0x096:  call   086067de <_ZNK9SkillSlot17get_skillslot_bufE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::get_skillslot_buf(ENUM_SKILL_TREE_KIND) const
08604157 +0x09b:  mov    %eax,-0x14(%ebp)
0860415a +0x09e:  cmpl   $0x0,-0x14(%ebp)
0860415e +0x0a2:  jne    0860416a <+0xae>
08604160 +0x0a4:  mov    $0xffffffff,%eax
08604165 +0x0a9:  jmp    0860431e <+0x262>
0860416a +0x0ae:  mov    -0x18(%ebp),%eax
0860416d +0x0b1:  mov    %eax,(%esp)
08604170 +0x0b4:  call   08374b96 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeb62>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeb62
08604175 +0x0b9:  mov    %eax,-0x10(%ebp)
08604178 +0x0bc:  movl   $0x0,-0xc(%ebp)
0860417f +0x0c3:  cmpl   $0x0,0x14(%ebp)
08604183 +0x0c7:  jne    08604233 <+0x177>
08604189 +0x0cd:  movl   $0x1,0x10(%esp)
08604191 +0x0d5:  mov    0x18(%ebp),%eax
08604194 +0x0d8:  mov    %eax,0xc(%esp)
08604198 +0x0dc:  mov    -0x10(%ebp),%eax
0860419b +0x0df:  mov    %eax,0x8(%esp)
0860419f +0x0e3:  mov    0x10(%ebp),%eax
086041a2 +0x0e6:  mov    %eax,0x4(%esp)
086041a6 +0x0ea:  mov    0x8(%ebp),%eax
086041a9 +0x0ed:  mov    %eax,(%esp)
086041ac +0x0f0:  call   08604a86 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb>  ; SkillSlot::get_skillslot_no(int, int, ENUM_SKILL_TREE_KIND, bool) const
086041b1 +0x0f5:  mov    %eax,-0xc(%ebp)
086041b4 +0x0f8:  cmpl   $0xffffffff,-0xc(%ebp)
086041b8 +0x0fc:  je     086041d3 <+0x117>
086041ba +0x0fe:  mov    -0xc(%ebp),%eax
086041bd +0x101:  add    %eax,%eax
086041bf +0x103:  add    -0x14(%ebp),%eax
086041c2 +0x106:  movb   $0x0,(%eax)
086041c5 +0x109:  mov    -0xc(%ebp),%eax
086041c8 +0x10c:  add    %eax,%eax
086041ca +0x10e:  add    -0x14(%ebp),%eax
086041cd +0x111:  mov    0x14(%ebp),%edx
086041d0 +0x114:  mov    %dl,0x1(%eax)
086041d3 +0x117:  mov    0x8(%ebp),%eax
086041d6 +0x11a:  mov    (%eax),%eax
086041d8 +0x11c:  test   %eax,%eax
086041da +0x11e:  je     0860431b <+0x25f>
086041e0 +0x124:  mov    0x8(%ebp),%eax
086041e3 +0x127:  mov    (%eax),%eax
086041e5 +0x129:  mov    %eax,(%esp)
086041e8 +0x12c:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
086041ed +0x131:  mov    %eax,%ebx
086041ef +0x133:  mov    0x8(%ebp),%eax
086041f2 +0x136:  mov    (%eax),%eax
086041f4 +0x138:  mov    %eax,(%esp)
086041f7 +0x13b:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086041fc +0x140:  mov    0x8(%ebp),%edx
086041ff +0x143:  mov    (%edx),%edx
08604201 +0x145:  lea    0x79700(%edx),%ecx
08604207 +0x14b:  movl   $0x0,0x14(%esp)
0860420f +0x153:  movl   $0x0,0x10(%esp)
08604217 +0x15b:  mov    0x10(%ebp),%edx
0860421a +0x15e:  mov    %edx,0xc(%esp)
0860421e +0x162:  mov    %ebx,0x8(%esp)
08604222 +0x166:  mov    %eax,0x4(%esp)
08604226 +0x16a:  mov    %ecx,(%esp)
08604229 +0x16d:  call   08682b6e <_ZN15cUserHistoryLog8SkillDelEiiii15eSkillDelReason>  ; cUserHistoryLog::SkillDel(int, int, int, int, eSkillDelReason)
0860422e +0x172:  jmp    0860431b <+0x25f>
08604233 +0x177:  movl   $0x1,0x10(%esp)
0860423b +0x17f:  mov    0x18(%ebp),%eax
0860423e +0x182:  mov    %eax,0xc(%esp)
08604242 +0x186:  mov    -0x10(%ebp),%eax
08604245 +0x189:  mov    %eax,0x8(%esp)
08604249 +0x18d:  mov    0x10(%ebp),%eax
0860424c +0x190:  mov    %eax,0x4(%esp)
08604250 +0x194:  mov    0x8(%ebp),%eax
08604253 +0x197:  mov    %eax,(%esp)
08604256 +0x19a:  call   08604a86 <_ZNK9SkillSlot16get_skillslot_noEii20ENUM_SKILL_TREE_KINDb>  ; SkillSlot::get_skillslot_no(int, int, ENUM_SKILL_TREE_KIND, bool) const
0860425b +0x19f:  mov    %eax,-0xc(%ebp)
0860425e +0x1a2:  cmpl   $0xffffffff,-0xc(%ebp)
08604262 +0x1a6:  je     08604274 <+0x1b8>
08604264 +0x1a8:  mov    -0xc(%ebp),%eax
08604267 +0x1ab:  add    %eax,%eax
08604269 +0x1ad:  add    -0x14(%ebp),%eax
0860426c +0x1b0:  mov    0x14(%ebp),%edx
0860426f +0x1b3:  mov    %dl,0x1(%eax)
08604272 +0x1b6:  jmp    086042c5 <+0x209>
08604274 +0x1b8:  mov    -0x18(%ebp),%eax
08604277 +0x1bb:  mov    %eax,(%esp)
0860427a +0x1be:  call   08609366 <_GLOBAL__I__ZN9SkillSlot14set_skill_slotEPcS0_i+0x39>  ; global constructors keyed to SkillSlot::set_skill_slot(char*, char*, int)+0x39
0860427f +0x1c3:  movzbl %al,%eax
08604282 +0x1c6:  movl   $0x1,0x14(%esp)
0860428a +0x1ce:  mov    0x18(%ebp),%edx
0860428d +0x1d1:  mov    %edx,0x10(%esp)
08604291 +0x1d5:  mov    %eax,0xc(%esp)
08604295 +0x1d9:  mov    -0x10(%ebp),%eax
08604298 +0x1dc:  mov    %eax,0x8(%esp)
0860429c +0x1e0:  mov    0x10(%ebp),%eax
0860429f +0x1e3:  mov    %eax,0x4(%esp)
086042a3 +0x1e7:  mov    0x8(%ebp),%eax
086042a6 +0x1ea:  mov    %eax,(%esp)
086042a9 +0x1ed:  call   08604324 <_ZN9SkillSlot12insert_skillEiib20ENUM_SKILL_TREE_KINDi>  ; SkillSlot::insert_skill(int, int, bool, ENUM_SKILL_TREE_KIND, int)
086042ae +0x1f2:  mov    %eax,-0xc(%ebp)
086042b1 +0x1f5:  cmpl   $0x0,-0xc(%ebp)
086042b5 +0x1f9:  js     086042c5 <+0x209>
086042b7 +0x1fb:  mov    -0xc(%ebp),%eax
086042ba +0x1fe:  add    %eax,%eax
086042bc +0x200:  add    -0x14(%ebp),%eax
086042bf +0x203:  mov    0x14(%ebp),%edx
086042c2 +0x206:  mov    %dl,0x1(%eax)
086042c5 +0x209:  mov    0x8(%ebp),%eax
086042c8 +0x20c:  mov    (%eax),%eax
086042ca +0x20e:  test   %eax,%eax
086042cc +0x210:  je     0860431b <+0x25f>
086042ce +0x212:  mov    0x8(%ebp),%eax
086042d1 +0x215:  mov    (%eax),%eax
086042d3 +0x217:  mov    %eax,(%esp)
086042d6 +0x21a:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
086042db +0x21f:  mov    %eax,%ebx
086042dd +0x221:  mov    0x8(%ebp),%eax
086042e0 +0x224:  mov    (%eax),%eax
086042e2 +0x226:  mov    %eax,(%esp)
086042e5 +0x229:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086042ea +0x22e:  mov    0x8(%ebp),%edx
086042ed +0x231:  mov    (%edx),%edx
086042ef +0x233:  lea    0x79700(%edx),%ecx
086042f5 +0x239:  movl   $0x1,0x14(%esp)
086042fd +0x241:  mov    0x14(%ebp),%edx
08604300 +0x244:  mov    %edx,0x10(%esp)
08604304 +0x248:  mov    0x10(%ebp),%edx
08604307 +0x24b:  mov    %edx,0xc(%esp)
0860430b +0x24f:  mov    %ebx,0x8(%esp)
0860430f +0x253:  mov    %eax,0x4(%esp)
08604313 +0x257:  mov    %ecx,(%esp)
08604316 +0x25a:  call   08682b2e <_ZN15cUserHistoryLog8SkillAddEiiii15eSkillAddReason>  ; cUserHistoryLog::SkillAdd(int, int, int, int, eSkillAddReason)
0860431b +0x25f:  mov    -0xc(%ebp),%eax
0860431e +0x262:  add    $0x34,%esp
08604321 +0x265:  pop    %ebx
08604322 +0x266:  pop    %ebp
08604323 +0x267:  ret
```

## 反编译 C

```c
// SkillSlot::growtype_skill @ 0x86040bc

/* SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND) */

int __thiscall
SkillSlot::growtype_skill
          (SkillSlot *this,int param_1,undefined4 param_2,int param_3,undefined4 param_5)

{
  undefined1 uVar1;
  int iVar2;
  CSkill *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_10;
  
  iVar2 = G_CDataManager();
  uVar3 = param_2;
  this_00 = (CSkill *)CDataManager::find_skill(iVar2,param_1);
  if (this_00 == (CSkill *)0x0) {
    LogManager::logFormat
              (1,"skill_slot.cpp",
               "int SkillSlot::growtype_skill(int, int, int, ENUM_SKILL_TREE_KIND)",0x20b,
               "G_CDataManager()->find_skill( %d, %d )",param_1,param_2);
    local_10 = -1;
  }
  else if (*(int *)this == 0) {
    local_10 = -1;
  }
  else {
    iVar2 = get_skillslot_buf(this,param_5,uVar3);
    if (iVar2 == 0) {
      local_10 = -1;
    }
    else {
      uVar3 = CSkill::get_group(this_00);
      if (param_3 == 0) {
        local_10 = get_skillslot_no(this,param_2,uVar3,param_5,1);
        if (local_10 != -1) {
          *(undefined1 *)(local_10 * 2 + iVar2) = 0;
          *(undefined1 *)(local_10 * 2 + iVar2 + 1) = 0;
        }
        if (*(int *)this != 0) {
          uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
          uVar4 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
          cUserHistoryLog::SkillDel
                    ((cUserHistoryLog *)(*(int *)this + 0x79700),uVar4,uVar3,param_2,0,0);
        }
      }
      else {
        local_10 = get_skillslot_no(this,param_2,uVar3,param_5,1);
        if (local_10 == -1) {
          uVar1 = CSkill::is_active_skill(this_00);
          local_10 = insert_skill(this,param_2,uVar3,uVar1,param_5,1);
          if (-1 < local_10) {
            *(char *)(local_10 * 2 + iVar2 + 1) = (char)param_3;
          }
        }
        else {
          *(char *)(local_10 * 2 + iVar2 + 1) = (char)param_3;
        }
        if (*(int *)this != 0) {
          uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex(*(CUserCharacInfo **)this);
          uVar4 = CUserCharacInfo::get_charac_job(*(CUserCharacInfo **)this);
          cUserHistoryLog::SkillAdd
                    ((cUserHistoryLog *)(*(int *)this + 0x79700),uVar4,uVar3,param_2,param_3,1);
        }
      }
    }
  }
  return local_10;
}
```

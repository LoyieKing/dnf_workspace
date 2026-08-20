# check_possible

`_ZNK5Quest14check_possibleERK18stSelectQuestParam`

`Quest::check_possible(stSelectQuestParam const&) const`

| 类 | 地址 |
|---|---|
| `Quest` | `0x08352d86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08352d86  _ZNK5Quest14check_possibleERK18stSelectQuestParam
#           Quest::check_possible(stSelectQuestParam const&) const
# range [0x08352d86, 0x08352fb3]
08352d86 +0x000:  push   %ebp
08352d87 +0x001:  mov    %esp,%ebp
08352d89 +0x003:  push   %ebx
08352d8a +0x004:  sub    $0x44,%esp
08352d8d +0x007:  mov    0xc(%ebp),%eax
08352d90 +0x00a:  mov    0x4(%eax),%eax
08352d93 +0x00d:  mov    %eax,-0x24(%ebp)
08352d96 +0x010:  mov    0xc(%ebp),%eax
08352d99 +0x013:  mov    0x8(%eax),%eax
08352d9c +0x016:  mov    %eax,-0x20(%ebp)
08352d9f +0x019:  mov    0xc(%ebp),%eax
08352da2 +0x01c:  mov    0xc(%eax),%eax
08352da5 +0x01f:  mov    %eax,-0x1c(%ebp)
08352da8 +0x022:  mov    0xc(%ebp),%eax
08352dab +0x025:  mov    (%eax),%eax
08352dad +0x027:  mov    %eax,-0x18(%ebp)
08352db0 +0x02a:  mov    0xc(%ebp),%eax
08352db3 +0x02d:  mov    0x10(%eax),%eax
08352db6 +0x030:  mov    %eax,-0x14(%ebp)
08352db9 +0x033:  mov    0xc(%ebp),%eax
08352dbc +0x036:  mov    0x1c(%eax),%eax
08352dbf +0x039:  mov    %eax,-0x10(%ebp)
08352dc2 +0x03c:  mov    0xc(%ebp),%eax
08352dc5 +0x03f:  mov    0x20(%eax),%eax
08352dc8 +0x042:  mov    %eax,-0xc(%ebp)
08352dcb +0x045:  mov    -0x24(%ebp),%eax
08352dce +0x048:  mov    %eax,0x4(%esp)
08352dd2 +0x04c:  mov    0x8(%ebp),%eax
08352dd5 +0x04f:  mov    %eax,(%esp)
08352dd8 +0x052:  call   08352a5c <_ZNK5Quest16checkPossibleJobE17ENUM_CHARACTERJOB>  ; Quest::checkPossibleJob(ENUM_CHARACTERJOB) const
08352ddd +0x057:  xor    $0x1,%eax
08352de0 +0x05a:  test   %al,%al
08352de2 +0x05c:  je     08352dee <+0x68>
08352de4 +0x05e:  mov    $0x0,%eax
08352de9 +0x063:  jmp    08352fae <+0x228>
08352dee +0x068:  mov    -0x24(%ebp),%eax
08352df1 +0x06b:  mov    %eax,0x4(%esp)
08352df5 +0x06f:  mov    0x8(%ebp),%eax
08352df8 +0x072:  mov    %eax,(%esp)
08352dfb +0x075:  call   08352c10 <_ZNK5Quest22_isNeededCheckGrowTypeE17ENUM_CHARACTERJOB>  ; Quest::_isNeededCheckGrowType(ENUM_CHARACTERJOB) const
08352e00 +0x07a:  test   %al,%al
08352e02 +0x07c:  je     08352ece <+0x148>
08352e08 +0x082:  mov    0x8(%ebp),%eax
08352e0b +0x085:  mov    0x1c(%eax),%eax
08352e0e +0x088:  cmp    $0x1,%eax
08352e11 +0x08b:  jne    08352e49 <+0xc3>
08352e13 +0x08d:  movl   $"Quest Script Error Break !, [grow type] != -1 and [job change quest] = 1",0x10(%esp)
08352e1b +0x095:  movl   $0x1193,0xc(%esp)
08352e23 +0x09d:  movl   $&_ZZNK5Quest14check_possibleERK18stSelectQuestParamE19__PRETTY_FUNCTION__,0x8(%esp)
08352e2b +0x0a5:  movl   $"data_manager.cpp",0x4(%esp)
08352e33 +0x0ad:  movl   $0x1,(%esp)
08352e3a +0x0b4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08352e3f +0x0b9:  mov    $0x0,%eax
08352e44 +0x0be:  jmp    08352fae <+0x228>
08352e49 +0x0c3:  mov    0x8(%ebp),%eax
08352e4c +0x0c6:  mov    0x1c(%eax),%eax
08352e4f +0x0c9:  cmp    $0x2,%eax
08352e52 +0x0cc:  jne    08352e86 <+0x100>
08352e54 +0x0ce:  mov    -0x24(%ebp),%eax
08352e57 +0x0d1:  movl   $0xffffffff,0xc(%esp)
08352e5f +0x0d9:  mov    -0x20(%ebp),%edx
08352e62 +0x0dc:  mov    %edx,0x8(%esp)
08352e66 +0x0e0:  mov    %eax,0x4(%esp)
08352e6a +0x0e4:  mov    0x8(%ebp),%eax
08352e6d +0x0e7:  mov    %eax,(%esp)
08352e70 +0x0ea:  call   08352afc <_ZNK5Quest20checkMatchedGrowTypeE17ENUM_CHARACTERJOBii>  ; Quest::checkMatchedGrowType(ENUM_CHARACTERJOB, int, int) const
08352e75 +0x0ef:  xor    $0x1,%eax
08352e78 +0x0f2:  test   %al,%al
08352e7a +0x0f4:  je     08352ece <+0x148>
08352e7c +0x0f6:  mov    $0x0,%eax
08352e81 +0x0fb:  jmp    08352fae <+0x228>
08352e86 +0x100:  mov    0x8(%ebp),%eax
08352e89 +0x103:  mov    0x1c(%eax),%eax
08352e8c +0x106:  cmp    $0xa,%eax
08352e8f +0x109:  je     08352ece <+0x148>
08352e91 +0x10b:  mov    0x8(%ebp),%eax
08352e94 +0x10e:  mov    0x1c(%eax),%eax
08352e97 +0x111:  cmp    $0x14,%eax
08352e9a +0x114:  je     08352ece <+0x148>
08352e9c +0x116:  mov    -0x24(%ebp),%eax
08352e9f +0x119:  movl   $0xffffffff,0xc(%esp)
08352ea7 +0x121:  mov    -0x20(%ebp),%edx
08352eaa +0x124:  mov    %edx,0x8(%esp)
08352eae +0x128:  mov    %eax,0x4(%esp)
08352eb2 +0x12c:  mov    0x8(%ebp),%eax
08352eb5 +0x12f:  mov    %eax,(%esp)
08352eb8 +0x132:  call   08352afc <_ZNK5Quest20checkMatchedGrowTypeE17ENUM_CHARACTERJOBii>  ; Quest::checkMatchedGrowType(ENUM_CHARACTERJOB, int, int) const
08352ebd +0x137:  xor    $0x1,%eax
08352ec0 +0x13a:  test   %al,%al
08352ec2 +0x13c:  je     08352ece <+0x148>
08352ec4 +0x13e:  mov    $0x0,%eax
08352ec9 +0x143:  jmp    08352fae <+0x228>
08352ece +0x148:  mov    0x8(%ebp),%eax
08352ed1 +0x14b:  mov    0x20(%eax),%eax
08352ed4 +0x14e:  cmp    -0x18(%ebp),%eax
08352ed7 +0x151:  jle    08352ee3 <+0x15d>
08352ed9 +0x153:  mov    $0x0,%eax
08352ede +0x158:  jmp    08352fae <+0x228>
08352ee3 +0x15d:  mov    0x8(%ebp),%eax
08352ee6 +0x160:  mov    0x24(%eax),%eax
08352ee9 +0x163:  cmp    -0x18(%ebp),%eax
08352eec +0x166:  jge    08352ef8 <+0x172>
08352eee +0x168:  mov    $0x0,%eax
08352ef3 +0x16d:  jmp    08352fae <+0x228>
08352ef8 +0x172:  mov    0x8(%ebp),%eax
08352efb +0x175:  mov    0x28(%eax),%eax
08352efe +0x178:  test   %eax,%eax
08352f00 +0x17a:  je     08352f17 <+0x191>
08352f02 +0x17c:  mov    0x8(%ebp),%eax
08352f05 +0x17f:  mov    0x28(%eax),%eax
08352f08 +0x182:  cmp    -0x14(%ebp),%eax
08352f0b +0x185:  jle    08352f17 <+0x191>
08352f0d +0x187:  mov    $0x0,%eax
08352f12 +0x18c:  jmp    08352fae <+0x228>
08352f17 +0x191:  mov    0x8(%ebp),%eax
08352f1a +0x194:  mov    0x8(%eax),%eax
08352f1d +0x197:  cmp    $0x1,%eax
08352f20 +0x19a:  jne    08352f4e <+0x1c8>
08352f22 +0x19c:  mov    0x8(%ebp),%eax
08352f25 +0x19f:  mov    0x4(%eax),%ebx
08352f28 +0x1a2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08352f2d +0x1a7:  mov    %ebx,0x8(%esp)
08352f31 +0x1ab:  mov    -0x18(%ebp),%edx
08352f34 +0x1ae:  mov    %edx,0x4(%esp)
08352f38 +0x1b2:  mov    %eax,(%esp)
08352f3b +0x1b5:  call   0836411e <_ZN12CDataManager29isThereDailyTrainingQuestListEii>  ; CDataManager::isThereDailyTrainingQuestList(int, int)
08352f40 +0x1ba:  xor    $0x1,%eax
08352f43 +0x1bd:  test   %al,%al
08352f45 +0x1bf:  je     08352f4e <+0x1c8>
08352f47 +0x1c1:  mov    $0x0,%eax
08352f4c +0x1c6:  jmp    08352fae <+0x228>
08352f4e +0x1c8:  mov    0x8(%ebp),%eax
08352f51 +0x1cb:  mov    0x13c(%eax),%eax
08352f57 +0x1d1:  test   %eax,%eax
08352f59 +0x1d3:  je     08352fa9 <+0x223>
08352f5b +0x1d5:  mov    0x8(%ebp),%eax
08352f5e +0x1d8:  mov    0x140(%eax),%eax
08352f64 +0x1de:  cmp    $0xffffffff,%eax
08352f67 +0x1e1:  je     08352fa9 <+0x223>
08352f69 +0x1e3:  mov    0x8(%ebp),%eax
08352f6c +0x1e6:  mov    0x13c(%eax),%eax
08352f72 +0x1ec:  cmp    $0xffffffff,%eax
08352f75 +0x1ef:  je     08352f85 <+0x1ff>
08352f77 +0x1f1:  mov    0x8(%ebp),%eax
08352f7a +0x1f4:  mov    0x13c(%eax),%eax
08352f80 +0x1fa:  cmp    -0x10(%ebp),%eax
08352f83 +0x1fd:  jne    08352f9a <+0x214>
08352f85 +0x1ff:  mov    0x8(%ebp),%eax
08352f88 +0x202:  mov    0x140(%eax),%eax
08352f8e +0x208:  cmp    -0xc(%ebp),%eax
08352f91 +0x20b:  jle    08352fa1 <+0x21b>
08352f93 +0x20d:  mov    $0x0,%eax
08352f98 +0x212:  jmp    08352fae <+0x228>
08352f9a +0x214:  mov    $0x0,%eax
08352f9f +0x219:  jmp    08352fae <+0x228>
08352fa1 +0x21b:  nop
08352fa2 +0x21c:  mov    $0x1,%eax
08352fa7 +0x221:  jmp    08352fae <+0x228>
08352fa9 +0x223:  mov    $0x1,%eax
08352fae +0x228:  add    $0x44,%esp
08352fb1 +0x22b:  pop    %ebx
08352fb2 +0x22c:  pop    %ebp
08352fb3 +0x22d:  ret
```

## 反编译 C

```c
// Quest::check_possible @ 0x8352d86

/* Quest::check_possible(stSelectQuestParam const&) const */

undefined4 __thiscall Quest::check_possible(Quest *this,stSelectQuestParam *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined4 uVar7;
  CDataManager *this_00;
  
  uVar7 = *(undefined4 *)(param_1 + 4);
  uVar1 = *(undefined4 *)(param_1 + 8);
  iVar2 = *(int *)param_1;
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar5 = *(int *)(param_1 + 0x20);
  cVar6 = checkPossibleJob(this,uVar7);
  if (cVar6 == '\x01') {
    cVar6 = _isNeededCheckGrowType(this,uVar7);
    if (cVar6 != '\0') {
      if (*(int *)(this + 0x1c) == 1) {
        LogManager::logFormat
                  (1,"data_manager.cpp",
                   "bool Quest::check_possible(const stSelectQuestParam&) const",0x1193,
                   "Quest Script Error Break !, [grow type] != -1 and [job change quest] = 1");
        return 0;
      }
      if (*(int *)(this + 0x1c) == 2) {
        cVar6 = checkMatchedGrowType(this,uVar7,uVar1,0xffffffff);
        if (cVar6 != '\x01') {
          return 0;
        }
      }
      else if (((*(int *)(this + 0x1c) != 10) && (*(int *)(this + 0x1c) != 0x14)) &&
              (cVar6 = checkMatchedGrowType(this,uVar7,uVar1,0xffffffff), cVar6 != '\x01')) {
        return 0;
      }
    }
    if (iVar2 < *(int *)(this + 0x20)) {
      uVar7 = 0;
    }
    else if (*(int *)(this + 0x24) < iVar2) {
      uVar7 = 0;
    }
    else if ((*(int *)(this + 0x28) == 0) || (*(int *)(this + 0x28) <= iVar3)) {
      if (*(int *)(this + 8) == 1) {
        iVar3 = *(int *)(this + 4);
        this_00 = (CDataManager *)G_CDataManager();
        cVar6 = CDataManager::isThereDailyTrainingQuestList(this_00,iVar2,iVar3);
        if (cVar6 != '\x01') {
          return 0;
        }
      }
      if ((*(int *)(this + 0x13c) == 0) || (*(int *)(this + 0x140) == -1)) {
        uVar7 = 1;
      }
      else if ((*(int *)(this + 0x13c) == -1) || (*(int *)(this + 0x13c) == iVar4)) {
        if (iVar5 < *(int *)(this + 0x140)) {
          uVar7 = 0;
        }
        else {
          uVar7 = 1;
        }
      }
      else {
        uVar7 = 0;
      }
    }
    else {
      uVar7 = 0;
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}
```

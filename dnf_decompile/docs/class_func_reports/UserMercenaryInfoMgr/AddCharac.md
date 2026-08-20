# AddCharac

`_ZN20UserMercenaryInfoMgr9AddCharacER21CHARAC_LOAD_MERCENARY`

`UserMercenaryInfoMgr::AddCharac(CHARAC_LOAD_MERCENARY&)`

| 类 | 地址 |
|---|---|
| `UserMercenaryInfoMgr` | `0x081b4300` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b4300  _ZN20UserMercenaryInfoMgr9AddCharacER21CHARAC_LOAD_MERCENARY
#           UserMercenaryInfoMgr::AddCharac(CHARAC_LOAD_MERCENARY&)
# range [0x081b4300, 0x081b4419]
081b4300 +0x000:  push   %ebp
081b4301 +0x001:  mov    %esp,%ebp
081b4303 +0x003:  push   %ebx
081b4304 +0x004:  sub    $0x24,%esp
081b4307 +0x007:  mov    0xc(%ebp),%eax
081b430a +0x00a:  mov    %eax,0x4(%esp)
081b430e +0x00e:  mov    0x8(%ebp),%eax
081b4311 +0x011:  mov    %eax,(%esp)
081b4314 +0x014:  call   081b4198 <_ZN20UserMercenaryInfoMgr16CheckValidAppendERK21CHARAC_LOAD_MERCENARY>  ; UserMercenaryInfoMgr::CheckValidAppend(CHARAC_LOAD_MERCENARY const&)
081b4319 +0x019:  xor    $0x1,%eax
081b431c +0x01c:  test   %al,%al
081b431e +0x01e:  je     081b432a <+0x2a>
081b4320 +0x020:  mov    $0x0,%eax
081b4325 +0x025:  jmp    081b4414 <+0x114>
081b432a +0x02a:  mov    0xc(%ebp),%eax
081b432d +0x02d:  movb   $0xa,0x32(%eax)
081b4331 +0x031:  movl   $0x0,-0x10(%ebp)
081b4338 +0x038:  jmp    081b43ee <+0xee>
081b433d +0x03d:  mov    -0x10(%ebp),%edx
081b4340 +0x040:  mov    0xc(%ebp),%eax
081b4343 +0x043:  add    $0xc,%edx
081b4346 +0x046:  mov    0x4(%eax,%edx,4),%ebx
081b434a +0x04a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b434f +0x04f:  mov    %ebx,0x4(%esp)
081b4353 +0x053:  mov    %eax,(%esp)
081b4356 +0x056:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081b435b +0x05b:  test   %eax,%eax
081b435d +0x05d:  jne    081b4366 <+0x66>
081b435f +0x05f:  mov    $0x0,%eax
081b4364 +0x064:  jmp    081b4386 <+0x86>
081b4366 +0x066:  movl   $0x0,0xc(%esp)
081b436e +0x06e:  movl   $&_ZTI10CEquipItem,0x8(%esp)
081b4376 +0x076:  movl   $&_ZTI5CItem,0x4(%esp)
081b437e +0x07e:  mov    %eax,(%esp)
081b4381 +0x081:  call   08725d90 <__dynamic_cast>
081b4386 +0x086:  mov    %eax,-0xc(%ebp)
081b4389 +0x089:  cmpl   $0x0,-0xc(%ebp)
081b438d +0x08d:  je     081b43e1 <+0xe1>
081b438f +0x08f:  mov    -0xc(%ebp),%eax
081b4392 +0x092:  mov    (%eax),%eax
081b4394 +0x094:  add    $0x10,%eax
081b4397 +0x097:  mov    (%eax),%edx
081b4399 +0x099:  mov    -0xc(%ebp),%eax
081b439c +0x09c:  mov    %eax,(%esp)
081b439f +0x09f:  call   *%edx
081b43a1 +0x0a1:  test   %al,%al
081b43a3 +0x0a3:  je     081b43d8 <+0xd8>
081b43a5 +0x0a5:  mov    0xc(%ebp),%eax
081b43a8 +0x0a8:  movzbl 0x32(%eax),%eax
081b43ac +0x0ac:  movsbl %al,%ebx
081b43af +0x0af:  mov    -0xc(%ebp),%eax
081b43b2 +0x0b2:  mov    %eax,(%esp)
081b43b5 +0x0b5:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
081b43ba +0x0ba:  cmp    %eax,%ebx
081b43bc +0x0bc:  setg   %al
081b43bf +0x0bf:  test   %al,%al
081b43c1 +0x0c1:  je     081b43ea <+0xea>
081b43c3 +0x0c3:  mov    -0xc(%ebp),%eax
081b43c6 +0x0c6:  mov    %eax,(%esp)
081b43c9 +0x0c9:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
081b43ce +0x0ce:  mov    %eax,%edx
081b43d0 +0x0d0:  mov    0xc(%ebp),%eax
081b43d3 +0x0d3:  mov    %dl,0x32(%eax)
081b43d6 +0x0d6:  jmp    081b43ea <+0xea>
081b43d8 +0x0d8:  mov    0xc(%ebp),%eax
081b43db +0x0db:  movb   $0x0,0x32(%eax)
081b43df +0x0df:  jmp    081b43fd <+0xfd>
081b43e1 +0x0e1:  mov    0xc(%ebp),%eax
081b43e4 +0x0e4:  movb   $0x0,0x32(%eax)
081b43e8 +0x0e8:  jmp    081b43fd <+0xfd>
081b43ea +0x0ea:  addl   $0x1,-0x10(%ebp)
081b43ee +0x0ee:  cmpl   $0x7,-0x10(%ebp)
081b43f2 +0x0f2:  setle  %al
081b43f5 +0x0f5:  test   %al,%al
081b43f7 +0x0f7:  jne    081b433d <+0x3d>
081b43fd +0x0fd:  mov    0x8(%ebp),%eax
081b4400 +0x100:  mov    0xc(%ebp),%edx
081b4403 +0x103:  mov    %edx,0x4(%esp)
081b4407 +0x107:  mov    %eax,(%esp)
081b440a +0x10a:  call   081b4bb2 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x426>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x426
081b440f +0x10f:  mov    $0x1,%eax
081b4414 +0x114:  add    $0x24,%esp
081b4417 +0x117:  pop    %ebx
081b4418 +0x118:  pop    %ebp
081b4419 +0x119:  ret
```

## 反编译 C

```c
// UserMercenaryInfoMgr::AddCharac @ 0x81b4300

/* UserMercenaryInfoMgr::AddCharac(CHARAC_LOAD_MERCENARY&) */

undefined4 __thiscall
UserMercenaryInfoMgr::AddCharac(UserMercenaryInfoMgr *this,CHARAC_LOAD_MERCENARY *param_1)

{
  char cVar1;
  CHARAC_LOAD_MERCENARY CVar2;
  undefined4 uVar3;
  CDataManager *this_00;
  int iVar4;
  CItem *this_01;
  int local_14;
  
  cVar1 = CheckValidAppend(this,param_1);
  if (cVar1 == '\x01') {
    param_1[0x32] = (CHARAC_LOAD_MERCENARY)0xa;
    for (local_14 = 0; local_14 < 8; local_14 = local_14 + 1) {
      iVar4 = *(int *)(param_1 + (local_14 + 0xc) * 4 + 4);
      this_00 = (CDataManager *)G_CDataManager();
      iVar4 = CDataManager::find_item(this_00,iVar4);
      if (iVar4 == 0) {
        this_01 = (CItem *)0x0;
      }
      else {
        this_01 = (CItem *)__dynamic_cast(iVar4,&CItem::typeinfo,&CEquipItem::typeinfo,0);
      }
      if (this_01 == (CItem *)0x0) {
        param_1[0x32] = (CHARAC_LOAD_MERCENARY)0x0;
        break;
      }
      cVar1 = (**(code **)(*(int *)this_01 + 0x10))(this_01);
      if (cVar1 == '\0') {
        param_1[0x32] = (CHARAC_LOAD_MERCENARY)0x0;
        break;
      }
      CVar2 = param_1[0x32];
      iVar4 = CItem::get_grade(this_01);
      if (iVar4 < (char)CVar2) {
        CVar2 = (CHARAC_LOAD_MERCENARY)CItem::get_grade(this_01);
        param_1[0x32] = CVar2;
      }
    }
    std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::push_back
              ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this,param_1);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```

# RandomConsistMap

`_ZN8WongWork10CBossStage16RandomConsistMapER5CUser`

`WongWork::CBossStage::RandomConsistMap(CUser&)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossStage` | `0x0814f426` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814f426  _ZN8WongWork10CBossStage16RandomConsistMapER5CUser
#           WongWork::CBossStage::RandomConsistMap(CUser&)
# range [0x0814f426, 0x0814f4fb]
0814f426 +0x00:  push   %ebp
0814f427 +0x01:  mov    %esp,%ebp
0814f429 +0x03:  push   %ebx
0814f42a +0x04:  sub    $0x24,%esp
0814f42d +0x07:  movl   $0x0,-0x10(%ebp)
0814f434 +0x0e:  lea    -0x10(%ebp),%eax
0814f437 +0x11:  mov    %eax,0x4(%esp)
0814f43b +0x15:  mov    0x8(%ebp),%eax
0814f43e +0x18:  mov    %eax,(%esp)
0814f441 +0x1b:  call   0814f4fc <_ZN8WongWork10CBossStage14randomMapIndexERi>  ; WongWork::CBossStage::randomMapIndex(int&)
0814f446 +0x20:  xor    $0x1,%eax
0814f449 +0x23:  test   %al,%al
0814f44b +0x25:  je     0814f457 <+0x31>
0814f44d +0x27:  mov    $0x0,%eax
0814f452 +0x2c:  jmp    0814f4f5 <+0xcf>
0814f457 +0x31:  mov    0xc(%ebp),%eax
0814f45a +0x34:  mov    %eax,(%esp)
0814f45d +0x37:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0814f462 +0x3c:  test   %al,%al
0814f464 +0x3e:  je     0814f48c <+0x66>
0814f466 +0x40:  mov    0xc(%ebp),%eax
0814f469 +0x43:  mov    0x796d0(%eax),%eax
0814f46f +0x49:  test   %eax,%eax
0814f471 +0x4b:  je     0814f48c <+0x66>
0814f473 +0x4d:  mov    0xc(%ebp),%eax
0814f476 +0x50:  mov    0x796d0(%eax),%eax
0814f47c +0x56:  mov    %eax,-0x10(%ebp)
0814f47f +0x59:  mov    0xc(%ebp),%eax
0814f482 +0x5c:  movl   $0x0,0x796d0(%eax)
0814f48c +0x66:  mov    -0x10(%ebp),%ebx
0814f48f +0x69:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0814f494 +0x6e:  mov    %ebx,0x4(%esp)
0814f498 +0x72:  mov    %eax,(%esp)
0814f49b +0x75:  call   0835fa14 <_ZNK12CDataManager8find_mapEi>  ; CDataManager::find_map(int) const
0814f4a0 +0x7a:  mov    %eax,-0xc(%ebp)
0814f4a3 +0x7d:  cmpl   $0x0,-0xc(%ebp)
0814f4a7 +0x81:  je     0814f4c2 <+0x9c>
0814f4a9 +0x83:  mov    -0xc(%ebp),%eax
0814f4ac +0x86:  mov    %eax,0x4(%esp)
0814f4b0 +0x8a:  mov    0x8(%ebp),%eax
0814f4b3 +0x8d:  mov    %eax,(%esp)
0814f4b6 +0x90:  call   0814bef4 <_ZN8WongWork10CBossStage10consistMapEPK4CMap>  ; WongWork::CBossStage::consistMap(CMap const*)
0814f4bb +0x95:  xor    $0x1,%eax
0814f4be +0x98:  test   %al,%al
0814f4c0 +0x9a:  je     0814f4c9 <+0xa3>
0814f4c2 +0x9c:  mov    $0x1,%eax
0814f4c7 +0xa1:  jmp    0814f4ce <+0xa8>
0814f4c9 +0xa3:  mov    $0x0,%eax
0814f4ce +0xa8:  test   %al,%al
0814f4d0 +0xaa:  je     0814f4d9 <+0xb3>
0814f4d2 +0xac:  mov    $0x0,%eax
0814f4d7 +0xb1:  jmp    0814f4f5 <+0xcf>
0814f4d9 +0xb3:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0814f4e0 +0xba:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
0814f4e5 +0xbf:  mov    %eax,%edx
0814f4e7 +0xc1:  mov    0x8(%ebp),%eax
0814f4ea +0xc4:  mov    %edx,0x9e8(%eax)
0814f4f0 +0xca:  mov    $0x1,%eax
0814f4f5 +0xcf:  add    $0x24,%esp
0814f4f8 +0xd2:  pop    %ebx
0814f4f9 +0xd3:  pop    %ebp
0814f4fa +0xd4:  ret
0814f4fb +0xd5:  nop
```

## 反编译 C

```c
// WongWork::CBossStage::RandomConsistMap @ 0x814f426

/* WongWork::CBossStage::RandomConsistMap(CUser&) */

bool __thiscall WongWork::CBossStage::RandomConsistMap(CBossStage *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_14;
  CMap *local_10;
  
  local_14 = 0;
  cVar2 = randomMapIndex(this,&local_14);
  if (cVar2 != '\x01') {
    return false;
  }
  cVar2 = CUser::isGMUser(param_1);
  if ((cVar2 != '\0') && (*(int *)(param_1 + 0x796d0) != 0)) {
    local_14 = *(int *)(param_1 + 0x796d0);
    *(undefined4 *)(param_1 + 0x796d0) = 0;
  }
  iVar3 = G_CDataManager();
  local_10 = (CMap *)CDataManager::find_map(iVar3);
  if ((local_10 == (CMap *)0x0) || (cVar2 = consistMap(this,local_10), cVar2 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    uVar4 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
    *(undefined4 *)(this + 0x9e8) = uVar4;
  }
  return !bVar1;
}
```

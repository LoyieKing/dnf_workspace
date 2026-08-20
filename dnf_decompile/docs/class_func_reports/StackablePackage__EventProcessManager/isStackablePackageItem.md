# isStackablePackageItem

`_ZNK16StackablePackage19EventProcessManager22isStackablePackageItemEi`

`StackablePackage::EventProcessManager::isStackablePackageItem(int) const`

| 类 | 地址 |
|---|---|
| `StackablePackage::EventProcessManager` | `0x082819c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082819c6  _ZNK16StackablePackage19EventProcessManager22isStackablePackageItemEi
#           StackablePackage::EventProcessManager::isStackablePackageItem(int) const
# range [0x082819c6, 0x08281a29]
082819c6 +0x00:  push   %ebp
082819c7 +0x01:  mov    %esp,%ebp
082819c9 +0x03:  sub    $0x28,%esp
082819cc +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082819d1 +0x0b:  mov    0xc(%ebp),%edx
082819d4 +0x0e:  mov    %edx,0x4(%esp)
082819d8 +0x12:  mov    %eax,(%esp)
082819db +0x15:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
082819e0 +0x1a:  mov    %eax,-0x10(%ebp)
082819e3 +0x1d:  cmpl   $0x0,-0x10(%ebp)
082819e7 +0x21:  jne    082819f0 <+0x2a>
082819e9 +0x23:  mov    $0x0,%eax
082819ee +0x28:  jmp    08281a27 <+0x61>
082819f0 +0x2a:  mov    -0x10(%ebp),%eax
082819f3 +0x2d:  mov    %eax,(%esp)
082819f6 +0x30:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
082819fb +0x35:  xor    $0x1,%eax
082819fe +0x38:  test   %al,%al
08281a00 +0x3a:  je     08281a09 <+0x43>
08281a02 +0x3c:  mov    $0x0,%eax
08281a07 +0x41:  jmp    08281a27 <+0x61>
08281a09 +0x43:  mov    -0x10(%ebp),%eax
08281a0c +0x46:  mov    %eax,-0xc(%ebp)
08281a0f +0x49:  mov    -0xc(%ebp),%eax
08281a12 +0x4c:  mov    (%eax),%eax
08281a14 +0x4e:  add    $0xc,%eax
08281a17 +0x51:  mov    (%eax),%edx
08281a19 +0x53:  mov    -0xc(%ebp),%eax
08281a1c +0x56:  mov    %eax,(%esp)
08281a1f +0x59:  call   *%edx
08281a21 +0x5b:  cmp    $0x26,%eax
08281a24 +0x5e:  sete   %al
08281a27 +0x61:  leave
08281a28 +0x62:  ret
08281a29 +0x63:  nop
```

## 反编译 C

```c
// StackablePackage::EventProcessManager::isStackablePackageItem @ 0x82819c6

/* StackablePackage::EventProcessManager::isStackablePackageItem(int) const */

bool __thiscall
StackablePackage::EventProcessManager::isStackablePackageItem(EventProcessManager *this,int param_1)

{
  char cVar1;
  CDataManager *this_00;
  CItem *this_01;
  int iVar2;
  bool bVar3;
  
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,param_1);
  if (this_01 == (CItem *)0x0) {
    bVar3 = false;
  }
  else {
    cVar1 = CItem::is_stackable(this_01);
    if (cVar1 == '\x01') {
      iVar2 = (**(code **)(*(int *)this_01 + 0xc))(this_01);
      bVar3 = iVar2 == 0x26;
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}
```

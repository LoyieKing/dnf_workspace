# updateCraneItemNeedMaterial

`_ZN20CraneMinigameManager27updateCraneItemNeedMaterialEi`

`CraneMinigameManager::updateCraneItemNeedMaterial(int)`

| 类 | 地址 |
|---|---|
| `CraneMinigameManager` | `0x080ebebc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ebebc  _ZN20CraneMinigameManager27updateCraneItemNeedMaterialEi
#           CraneMinigameManager::updateCraneItemNeedMaterial(int)
# range [0x080ebebc, 0x080ebf2d]
080ebebc +0x00:  push   %ebp
080ebebd +0x01:  mov    %esp,%ebp
080ebebf +0x03:  push   %esi
080ebec0 +0x04:  push   %ebx
080ebec1 +0x05:  sub    $0x20,%esp
080ebec4 +0x08:  mov    0xc(%ebp),%ebx
080ebec7 +0x0b:  mov    0x8(%ebp),%eax
080ebeca +0x0e:  add    $0x5c,%eax
080ebecd +0x11:  mov    %eax,(%esp)
080ebed0 +0x14:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
080ebed5 +0x19:  mov    %eax,-0xc(%ebp)
080ebed8 +0x1c:  mov    %ebx,%eax
080ebeda +0x1e:  mov    $0x0,%edx
080ebedf +0x23:  divl   -0xc(%ebp)
080ebee2 +0x26:  mov    %edx,%ecx
080ebee4 +0x28:  mov    %ecx,%eax
080ebee6 +0x2a:  mov    %eax,%edx
080ebee8 +0x2c:  mov    0x8(%ebp),%eax
080ebeeb +0x2f:  mov    %dl,0x68(%eax)
080ebeee +0x32:  mov    0x8(%ebp),%eax
080ebef1 +0x35:  movzbl 0x68(%eax),%eax
080ebef5 +0x39:  movzbl %al,%eax
080ebef8 +0x3c:  mov    0x8(%ebp),%edx
080ebefb +0x3f:  add    $0x5c,%edx
080ebefe +0x42:  mov    %eax,0x4(%esp)
080ebf02 +0x46:  mov    %edx,(%esp)
080ebf05 +0x49:  call   080ec0b8 <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0xaf>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0xaf
080ebf0a +0x4e:  mov    %eax,%ebx
080ebf0c +0x50:  mov    0x8(%ebp),%eax
080ebf0f +0x53:  mov    0x10(%eax),%esi
080ebf12 +0x56:  call   081b5ab2 <_ZN23NeedMaterialDataManager11getInstanceEv>  ; NeedMaterialDataManager::getInstance()
080ebf17 +0x5b:  mov    %ebx,0x8(%esp)
080ebf1b +0x5f:  mov    %esi,0x4(%esp)
080ebf1f +0x63:  mov    %eax,(%esp)
080ebf22 +0x66:  call   081b5b46 <_ZN23NeedMaterialDataManager19setNeedMaterialInfoEiRKSt4pairIiiE>  ; NeedMaterialDataManager::setNeedMaterialInfo(int, std::pair<int, int> const&)
080ebf27 +0x6b:  add    $0x20,%esp
080ebf2a +0x6e:  pop    %ebx
080ebf2b +0x6f:  pop    %esi
080ebf2c +0x70:  pop    %ebp
080ebf2d +0x71:  ret
```

## 反编译 C

```c
// CraneMinigameManager::updateCraneItemNeedMaterial @ 0x80ebebc

/* CraneMinigameManager::updateCraneItemNeedMaterial(int) */

void __thiscall
CraneMinigameManager::updateCraneItemNeedMaterial(CraneMinigameManager *this,int param_1)

{
  int iVar1;
  uint uVar2;
  pair *ppVar3;
  NeedMaterialDataManager *this_00;
  
  uVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x5c))
  ;
  this[0x68] = SUB41((uint)param_1 % uVar2,0);
  ppVar3 = (pair *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::at
                             ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                              (this + 0x5c),(uint)(byte)this[0x68]);
  iVar1 = *(int *)(this + 0x10);
  this_00 = (NeedMaterialDataManager *)NeedMaterialDataManager::getInstance();
  NeedMaterialDataManager::setNeedMaterialInfo(this_00,iVar1,ppVar3);
  return;
}
```

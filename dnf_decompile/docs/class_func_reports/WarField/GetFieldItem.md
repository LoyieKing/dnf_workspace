# GetFieldItem

`_ZN8WarField12GetFieldItemEiR8map_item`

`WarField::GetFieldItem(int, map_item&)`

| 类 | 地址 |
|---|---|
| `WarField` | `0x086b9fe6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b9fe6  _ZN8WarField12GetFieldItemEiR8map_item
#           WarField::GetFieldItem(int, map_item&)
# range [0x086b9fe6, 0x086ba081]
086b9fe6 +0x00:  push   %ebp
086b9fe7 +0x01:  mov    %esp,%ebp
086b9fe9 +0x03:  push   %edi
086b9fea +0x04:  push   %esi
086b9feb +0x05:  push   %ebx
086b9fec +0x06:  sub    $0x3c,%esp
086b9fef +0x09:  lea    -0x20(%ebp),%eax
086b9ff2 +0x0c:  mov    %eax,(%esp)
086b9ff5 +0x0f:  call   08152524 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e59>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e59
086b9ffa +0x14:  mov    0x8(%ebp),%eax
086b9ffd +0x17:  lea    0x2c(%eax),%ecx
086ba000 +0x1a:  lea    -0x2c(%ebp),%eax
086ba003 +0x1d:  lea    0xc(%ebp),%edx
086ba006 +0x20:  mov    %edx,0x8(%esp)
086ba00a +0x24:  mov    %ecx,0x4(%esp)
086ba00e +0x28:  mov    %eax,(%esp)
086ba011 +0x2b:  call   08152532 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e67
086ba016 +0x30:  sub    $0x4,%esp
086ba019 +0x33:  mov    -0x2c(%ebp),%eax
086ba01c +0x36:  mov    %eax,-0x20(%ebp)
086ba01f +0x39:  mov    0x8(%ebp),%eax
086ba022 +0x3c:  lea    0x2c(%eax),%edx
086ba025 +0x3f:  lea    -0x1c(%ebp),%eax
086ba028 +0x42:  mov    %edx,0x4(%esp)
086ba02c +0x46:  mov    %eax,(%esp)
086ba02f +0x49:  call   0815255e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e93>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e93
086ba034 +0x4e:  sub    $0x4,%esp
086ba037 +0x51:  lea    -0x1c(%ebp),%eax
086ba03a +0x54:  mov    %eax,0x4(%esp)
086ba03e +0x58:  lea    -0x20(%ebp),%eax
086ba041 +0x5b:  mov    %eax,(%esp)
086ba044 +0x5e:  call   0815494c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x4281>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x4281
086ba049 +0x63:  test   %al,%al
086ba04b +0x65:  je     086ba054 <+0x6e>
086ba04d +0x67:  mov    $0x0,%eax
086ba052 +0x6c:  jmp    086ba077 <+0x91>
086ba054 +0x6e:  lea    -0x20(%ebp),%eax
086ba057 +0x71:  mov    %eax,(%esp)
086ba05a +0x74:  call   081529b4 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x22e9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x22e9
086ba05f +0x79:  mov    0x10(%ebp),%edx
086ba062 +0x7c:  lea    0x4(%eax),%ebx
086ba065 +0x7f:  mov    $0x15,%eax
086ba06a +0x84:  mov    %edx,%edi
086ba06c +0x86:  mov    %ebx,%esi
086ba06e +0x88:  mov    %eax,%ecx
086ba070 +0x8a:  rep movsl %ds:(%esi),%es:(%edi)
086ba072 +0x8c:  mov    $0x1,%eax
086ba077 +0x91:  lea    -0xc(%ebp),%esp
086ba07a +0x94:  add    $0x0,%esp
086ba07d +0x97:  pop    %ebx
086ba07e +0x98:  pop    %esi
086ba07f +0x99:  pop    %edi
086ba080 +0x9a:  pop    %ebp
086ba081 +0x9b:  ret
```

## 反编译 C

```c
// WarField::GetFieldItem @ 0x86b9fe6

/* WarField::GetFieldItem(int, map_item&) */

undefined4 __thiscall WarField::GetFieldItem(WarField *this,int param_1,map_item *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  int local_30 [3];
  int local_24;
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_20 [16];
  
  bVar6 = 0;
  std::_Rb_tree_iterator<std::pair<int_const,map_item>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_24);
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::find
            (local_30);
  local_24 = local_30[0];
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::end(local_20)
  ;
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_24,
                     (_Rb_tree_iterator *)local_20);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_24);
    puVar5 = (undefined4 *)(iVar3 + 4);
    for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)param_2 = *puVar5;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      param_2 = param_2 + (uint)bVar6 * -8 + 4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

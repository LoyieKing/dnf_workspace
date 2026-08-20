# getPvPSkillTree

`_ZNK27PvPSkillTreeParameterScript15getPvPSkillTreeEiiiibPPSt6vectorISt4pairIiiESaIS2_EE`

`PvPSkillTreeParameterScript::getPvPSkillTree(int, int, int, int, bool, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >**) const`

| 类 | 地址 |
|---|---|
| `PvPSkillTreeParameterScript` | `0x08a5db5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a5db5a  _ZNK27PvPSkillTreeParameterScript15getPvPSkillTreeEiiiibPPSt6vectorISt4pairIiiESaIS2_EE
#           PvPSkillTreeParameterScript::getPvPSkillTree(int, int, int, int, bool, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >**) const
# range [0x08a5db5a, 0x08a5dc73]
08a5db5a +0x000:  push   %ebp
08a5db5b +0x001:  mov    %esp,%ebp
08a5db5d +0x003:  sub    $0x48,%esp
08a5db60 +0x006:  mov    0x1c(%ebp),%eax
08a5db63 +0x009:  mov    %al,-0x2c(%ebp)
08a5db66 +0x00c:  mov    0x14(%ebp),%eax
08a5db69 +0x00f:  movzbl %al,%ecx
08a5db6c +0x012:  mov    0x10(%ebp),%eax
08a5db6f +0x015:  movzbl %al,%edx
08a5db72 +0x018:  mov    0xc(%ebp),%eax
08a5db75 +0x01b:  movzbl %al,%eax
08a5db78 +0x01e:  mov    %ecx,0xc(%esp)
08a5db7c +0x022:  mov    %edx,0x8(%esp)
08a5db80 +0x026:  mov    %eax,0x4(%esp)
08a5db84 +0x02a:  lea    -0x13(%ebp),%eax
08a5db87 +0x02d:  mov    %eax,(%esp)
08a5db8a +0x030:  call   08a5e768 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0xad>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0xad
08a5db8f +0x035:  mov    0x8(%ebp),%edx
08a5db92 +0x038:  lea    -0x18(%ebp),%eax
08a5db95 +0x03b:  lea    -0x13(%ebp),%ecx
08a5db98 +0x03e:  mov    %ecx,0x8(%esp)
08a5db9c +0x042:  mov    %edx,0x4(%esp)
08a5dba0 +0x046:  mov    %eax,(%esp)
08a5dba3 +0x049:  call   08a5ec88 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x5cd>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x5cd
08a5dba8 +0x04e:  sub    $0x4,%esp
08a5dbab +0x051:  mov    0x8(%ebp),%edx
08a5dbae +0x054:  lea    -0x10(%ebp),%eax
08a5dbb1 +0x057:  mov    %edx,0x4(%esp)
08a5dbb5 +0x05b:  mov    %eax,(%esp)
08a5dbb8 +0x05e:  call   08a5ecb4 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x5f9>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x5f9
08a5dbbd +0x063:  sub    $0x4,%esp
08a5dbc0 +0x066:  lea    -0x10(%ebp),%eax
08a5dbc3 +0x069:  mov    %eax,0x4(%esp)
08a5dbc7 +0x06d:  lea    -0x18(%ebp),%eax
08a5dbca +0x070:  mov    %eax,(%esp)
08a5dbcd +0x073:  call   08a5ecda <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x61f>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x61f
08a5dbd2 +0x078:  test   %al,%al
08a5dbd4 +0x07a:  je     08a5dc6c <+0x112>
08a5dbda +0x080:  lea    -0x18(%ebp),%eax
08a5dbdd +0x083:  mov    %eax,(%esp)
08a5dbe0 +0x086:  call   08a5ecee <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x633>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x633
08a5dbe5 +0x08b:  lea    0x4(%eax),%ecx
08a5dbe8 +0x08e:  lea    -0x1c(%ebp),%eax
08a5dbeb +0x091:  lea    0x18(%ebp),%edx
08a5dbee +0x094:  mov    %edx,0x8(%esp)
08a5dbf2 +0x098:  mov    %ecx,0x4(%esp)
08a5dbf6 +0x09c:  mov    %eax,(%esp)
08a5dbf9 +0x09f:  call   08a5ecfc <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x641>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x641
08a5dbfe +0x0a4:  sub    $0x4,%esp
08a5dc01 +0x0a7:  lea    -0x18(%ebp),%eax
08a5dc04 +0x0aa:  mov    %eax,(%esp)
08a5dc07 +0x0ad:  call   08a5ecee <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x633>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x633
08a5dc0c +0x0b2:  lea    0x4(%eax),%edx
08a5dc0f +0x0b5:  lea    -0xc(%ebp),%eax
08a5dc12 +0x0b8:  mov    %edx,0x4(%esp)
08a5dc16 +0x0bc:  mov    %eax,(%esp)
08a5dc19 +0x0bf:  call   08a5ed28 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x66d>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x66d
08a5dc1e +0x0c4:  sub    $0x4,%esp
08a5dc21 +0x0c7:  lea    -0xc(%ebp),%eax
08a5dc24 +0x0ca:  mov    %eax,0x4(%esp)
08a5dc28 +0x0ce:  lea    -0x1c(%ebp),%eax
08a5dc2b +0x0d1:  mov    %eax,(%esp)
08a5dc2e +0x0d4:  call   08a5ed4e <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x693>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x693
08a5dc33 +0x0d9:  test   %al,%al
08a5dc35 +0x0db:  je     08a5dc6c <+0x112>
08a5dc37 +0x0dd:  cmpb   $0x0,-0x2c(%ebp)
08a5dc3b +0x0e1:  je     08a5dc52 <+0xf8>
08a5dc3d +0x0e3:  lea    -0x1c(%ebp),%eax
08a5dc40 +0x0e6:  mov    %eax,(%esp)
08a5dc43 +0x0e9:  call   08a5ed62 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x6a7>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x6a7
08a5dc48 +0x0ee:  lea    0x10(%eax),%edx
08a5dc4b +0x0f1:  mov    0x20(%ebp),%eax
08a5dc4e +0x0f4:  mov    %edx,(%eax)
08a5dc50 +0x0f6:  jmp    08a5dc65 <+0x10b>
08a5dc52 +0x0f8:  lea    -0x1c(%ebp),%eax
08a5dc55 +0x0fb:  mov    %eax,(%esp)
08a5dc58 +0x0fe:  call   08a5ed62 <_GLOBAL__I_g_pvpSkillTreeScriptBaseDirectory+0x6a7>  ; global constructors keyed to g_pvpSkillTreeScriptBaseDirectory+0x6a7
08a5dc5d +0x103:  lea    0x4(%eax),%edx
08a5dc60 +0x106:  mov    0x20(%ebp),%eax
08a5dc63 +0x109:  mov    %edx,(%eax)
08a5dc65 +0x10b:  mov    $0x1,%eax
08a5dc6a +0x110:  jmp    08a5dc71 <+0x117>
08a5dc6c +0x112:  mov    $0x0,%eax
08a5dc71 +0x117:  leave
08a5dc72 +0x118:  ret
08a5dc73 +0x119:  nop
```

## 反编译 C

```c
// PvPSkillTreeParameterScript::getPvPSkillTree @ 0x8a5db5a

/* PvPSkillTreeParameterScript::getPvPSkillTree(int, int, int, int, bool, std::vector<std::pair<int,
   int>, std::allocator<std::pair<int, int> > >**) const */

undefined4 __thiscall
PvPSkillTreeParameterScript::getPvPSkillTree
          (PvPSkillTreeParameterScript *this,int param_1,int param_2,int param_3,int param_4,
          bool param_5,vector **param_6)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<int_const,PvPSkillTreeValue>> local_20 [4];
  PvPSkillTreeKey local_1c [5];
  PvPSkillTreeKey local_17 [3];
  map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
  local_14 [4];
  map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
  local_10 [12];
  
  PvPSkillTreeKey::PvPSkillTreeKey(local_17,(uchar)param_1,(uchar)param_2,(uchar)param_3);
  std::
  map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
  ::find(local_1c);
  std::
  map<PvPSkillTreeKey,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>,std::less<PvPSkillTreeKey>,std::allocator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>>
  ::end(local_14);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
          ::operator!=((_Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                        *)local_1c,(_Rb_tree_const_iterator *)local_14);
  if (cVar1 != '\0') {
    std::
    _Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
    ::operator->((_Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                  *)local_1c);
    std::
    map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
    ::find((int *)local_20);
    std::
    _Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
    ::operator->((_Rb_tree_const_iterator<std::pair<PvPSkillTreeKey_const,std::map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>>>
                  *)local_1c);
    std::
    map<int,PvPSkillTreeValue,std::less<int>,std::allocator<std::pair<int_const,PvPSkillTreeValue>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,PvPSkillTreeValue>>::operator!=
                      (local_20,(_Rb_tree_const_iterator *)local_10);
    if (cVar1 != '\0') {
      if (param_5) {
        iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,PvPSkillTreeValue>>::operator->
                          (local_20);
        *param_6 = (vector *)(iVar2 + 0x10);
      }
      else {
        iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,PvPSkillTreeValue>>::operator->
                          (local_20);
        *param_6 = (vector *)(iVar2 + 4);
      }
      return 1;
    }
  }
  return 0;
}
```

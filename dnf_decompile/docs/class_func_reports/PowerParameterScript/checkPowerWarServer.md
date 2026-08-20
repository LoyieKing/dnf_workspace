# checkPowerWarServer

`_ZN20PowerParameterScript19checkPowerWarServerEii`

`PowerParameterScript::checkPowerWarServer(int, int)`

| 类 | 地址 |
|---|---|
| `PowerParameterScript` | `0x08a59db4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a59db4  _ZN20PowerParameterScript19checkPowerWarServerEii
#           PowerParameterScript::checkPowerWarServer(int, int)
# range [0x08a59db4, 0x08a59e51]
08a59db4 +0x00:  push   %ebp
08a59db5 +0x01:  mov    %esp,%ebp
08a59db7 +0x03:  sub    $0x28,%esp
08a59dba +0x06:  lea    -0x10(%ebp),%eax
08a59dbd +0x09:  mov    %eax,(%esp)
08a59dc0 +0x0c:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08a59dc5 +0x11:  mov    0x8(%ebp),%eax
08a59dc8 +0x14:  lea    0x9c(%eax),%edx
08a59dce +0x1a:  lea    -0x14(%ebp),%eax
08a59dd1 +0x1d:  mov    %edx,0x4(%esp)
08a59dd5 +0x21:  mov    %eax,(%esp)
08a59dd8 +0x24:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
08a59ddd +0x29:  sub    $0x4,%esp
08a59de0 +0x2c:  mov    0x8(%ebp),%eax
08a59de3 +0x2f:  lea    0x9c(%eax),%edx
08a59de9 +0x35:  lea    -0x18(%ebp),%eax
08a59dec +0x38:  mov    %edx,0x4(%esp)
08a59df0 +0x3c:  mov    %eax,(%esp)
08a59df3 +0x3f:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
08a59df8 +0x44:  sub    $0x4,%esp
08a59dfb +0x47:  jmp    08a59e35 <+0x81>
08a59dfd +0x49:  lea    -0x14(%ebp),%eax
08a59e00 +0x4c:  mov    %eax,(%esp)
08a59e03 +0x4f:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
08a59e08 +0x54:  mov    0x4(%eax),%edx
08a59e0b +0x57:  mov    (%eax),%eax
08a59e0d +0x59:  mov    %eax,-0x10(%ebp)
08a59e10 +0x5c:  mov    %edx,-0xc(%ebp)
08a59e13 +0x5f:  mov    -0x10(%ebp),%eax
08a59e16 +0x62:  cmp    0xc(%ebp),%eax
08a59e19 +0x65:  jne    08a59e2a <+0x76>
08a59e1b +0x67:  mov    -0xc(%ebp),%eax
08a59e1e +0x6a:  cmp    0x10(%ebp),%eax
08a59e21 +0x6d:  jne    08a59e2a <+0x76>
08a59e23 +0x6f:  mov    $0x1,%eax
08a59e28 +0x74:  jmp    08a59e50 <+0x9c>
08a59e2a +0x76:  lea    -0x14(%ebp),%eax
08a59e2d +0x79:  mov    %eax,(%esp)
08a59e30 +0x7c:  call   0811120a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x71c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x71c
08a59e35 +0x81:  lea    -0x18(%ebp),%eax
08a59e38 +0x84:  mov    %eax,0x4(%esp)
08a59e3c +0x88:  lea    -0x14(%ebp),%eax
08a59e3f +0x8b:  mov    %eax,(%esp)
08a59e42 +0x8e:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
08a59e47 +0x93:  test   %al,%al
08a59e49 +0x95:  jne    08a59dfd <+0x49>
08a59e4b +0x97:  mov    $0x0,%eax
08a59e50 +0x9c:  leave
08a59e51 +0x9d:  ret
```

## 反编译 C

```c
// PowerParameterScript::checkPowerWarServer @ 0x8a59db4

/* PowerParameterScript::checkPowerWarServer(int, int) */

undefined4 __thiscall
PowerParameterScript::checkPowerWarServer(PowerParameterScript *this,int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  __normal_iterator local_1c [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  std::pair<int,int>::pair((pair<int,int> *)&local_14);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_18,local_1c);
    if (!bVar1) {
      return 0;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator*(local_18);
    local_10 = piVar2[1];
    local_14 = *piVar2;
    if ((local_14 == param_1) && (local_10 == param_2)) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_18);
  }
  return 1;
}
```

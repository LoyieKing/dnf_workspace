# checkAssaultServer

`_ZN21ServerParameterScript18checkAssaultServerEii`

`ServerParameterScript::checkAssaultServer(int, int)`

| 类 | 地址 |
|---|---|
| `ServerParameterScript` | `0x08a8c3ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a8c3ee  _ZN21ServerParameterScript18checkAssaultServerEii
#           ServerParameterScript::checkAssaultServer(int, int)
# range [0x08a8c3ee, 0x08a8c485]
08a8c3ee +0x00:  push   %ebp
08a8c3ef +0x01:  mov    %esp,%ebp
08a8c3f1 +0x03:  sub    $0x28,%esp
08a8c3f4 +0x06:  lea    -0x10(%ebp),%eax
08a8c3f7 +0x09:  mov    %eax,(%esp)
08a8c3fa +0x0c:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08a8c3ff +0x11:  mov    0x8(%ebp),%eax
08a8c402 +0x14:  lea    0x18(%eax),%edx
08a8c405 +0x17:  lea    -0x14(%ebp),%eax
08a8c408 +0x1a:  mov    %edx,0x4(%esp)
08a8c40c +0x1e:  mov    %eax,(%esp)
08a8c40f +0x21:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
08a8c414 +0x26:  sub    $0x4,%esp
08a8c417 +0x29:  mov    0x8(%ebp),%eax
08a8c41a +0x2c:  lea    0x18(%eax),%edx
08a8c41d +0x2f:  lea    -0x18(%ebp),%eax
08a8c420 +0x32:  mov    %edx,0x4(%esp)
08a8c424 +0x36:  mov    %eax,(%esp)
08a8c427 +0x39:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
08a8c42c +0x3e:  sub    $0x4,%esp
08a8c42f +0x41:  jmp    08a8c469 <+0x7b>
08a8c431 +0x43:  lea    -0x14(%ebp),%eax
08a8c434 +0x46:  mov    %eax,(%esp)
08a8c437 +0x49:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
08a8c43c +0x4e:  mov    0x4(%eax),%edx
08a8c43f +0x51:  mov    (%eax),%eax
08a8c441 +0x53:  mov    %eax,-0x10(%ebp)
08a8c444 +0x56:  mov    %edx,-0xc(%ebp)
08a8c447 +0x59:  mov    -0x10(%ebp),%eax
08a8c44a +0x5c:  cmp    0xc(%ebp),%eax
08a8c44d +0x5f:  jne    08a8c45e <+0x70>
08a8c44f +0x61:  mov    -0xc(%ebp),%eax
08a8c452 +0x64:  cmp    0x10(%ebp),%eax
08a8c455 +0x67:  jne    08a8c45e <+0x70>
08a8c457 +0x69:  mov    $0x1,%eax
08a8c45c +0x6e:  jmp    08a8c484 <+0x96>
08a8c45e +0x70:  lea    -0x14(%ebp),%eax
08a8c461 +0x73:  mov    %eax,(%esp)
08a8c464 +0x76:  call   0811120a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x71c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x71c
08a8c469 +0x7b:  lea    -0x18(%ebp),%eax
08a8c46c +0x7e:  mov    %eax,0x4(%esp)
08a8c470 +0x82:  lea    -0x14(%ebp),%eax
08a8c473 +0x85:  mov    %eax,(%esp)
08a8c476 +0x88:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
08a8c47b +0x8d:  test   %al,%al
08a8c47d +0x8f:  jne    08a8c431 <+0x43>
08a8c47f +0x91:  mov    $0x0,%eax
08a8c484 +0x96:  leave
08a8c485 +0x97:  ret
```

## 反编译 C

```c
// ServerParameterScript::checkAssaultServer @ 0x8a8c3ee

/* ServerParameterScript::checkAssaultServer(int, int) */

undefined4 __thiscall
ServerParameterScript::checkAssaultServer(ServerParameterScript *this,int param_1,int param_2)

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

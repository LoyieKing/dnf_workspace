# Get_APC_Name_byIndex

`_ZN22TowerOfDespair_APC_Mgr20Get_APC_Name_byIndexERK9TOD_Layer`

`TowerOfDespair_APC_Mgr::Get_APC_Name_byIndex(TOD_Layer const&)`

| 类 | 地址 |
|---|---|
| `TowerOfDespair_APC_Mgr` | `0x085ff020` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ff020  _ZN22TowerOfDespair_APC_Mgr20Get_APC_Name_byIndexERK9TOD_Layer
#           TowerOfDespair_APC_Mgr::Get_APC_Name_byIndex(TOD_Layer const&)
# range [0x085ff020, 0x085ff09c]
085ff020 +0x00:  push   %ebp
085ff021 +0x01:  mov    %esp,%ebp
085ff023 +0x03:  sub    $0x38,%esp
085ff026 +0x06:  lea    -0x10(%ebp),%eax
085ff029 +0x09:  mov    %eax,(%esp)
085ff02c +0x0c:  call   085ff170 <_GLOBAL__I__ZN9TOD_LayerC2Et+0x93>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0x93
085ff031 +0x11:  mov    0x8(%ebp),%edx
085ff034 +0x14:  lea    -0xc(%ebp),%eax
085ff037 +0x17:  mov    %edx,0x4(%esp)
085ff03b +0x1b:  mov    %eax,(%esp)
085ff03e +0x1e:  call   085ff1aa <_GLOBAL__I__ZN9TOD_LayerC2Et+0xcd>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0xcd
085ff043 +0x23:  sub    $0x4,%esp
085ff046 +0x26:  mov    0x8(%ebp),%edx
085ff049 +0x29:  lea    -0x1c(%ebp),%eax
085ff04c +0x2c:  mov    0xc(%ebp),%ecx
085ff04f +0x2f:  mov    %ecx,0x8(%esp)
085ff053 +0x33:  mov    %edx,0x4(%esp)
085ff057 +0x37:  mov    %eax,(%esp)
085ff05a +0x3a:  call   085ff17e <_GLOBAL__I__ZN9TOD_LayerC2Et+0xa1>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0xa1
085ff05f +0x3f:  sub    $0x4,%esp
085ff062 +0x42:  mov    -0x1c(%ebp),%eax
085ff065 +0x45:  mov    %eax,-0x10(%ebp)
085ff068 +0x48:  lea    -0xc(%ebp),%eax
085ff06b +0x4b:  mov    %eax,0x4(%esp)
085ff06f +0x4f:  lea    -0x10(%ebp),%eax
085ff072 +0x52:  mov    %eax,(%esp)
085ff075 +0x55:  call   085ff1d0 <_GLOBAL__I__ZN9TOD_LayerC2Et+0xf3>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0xf3
085ff07a +0x5a:  test   %al,%al
085ff07c +0x5c:  je     085ff096 <+0x76>
085ff07e +0x5e:  lea    -0x10(%ebp),%eax
085ff081 +0x61:  mov    %eax,(%esp)
085ff084 +0x64:  call   085ff1e4 <_GLOBAL__I__ZN9TOD_LayerC2Et+0x107>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0x107
085ff089 +0x69:  add    $0x4,%eax
085ff08c +0x6c:  mov    %eax,(%esp)
085ff08f +0x6f:  call   085ff136 <_GLOBAL__I__ZN9TOD_LayerC2Et+0x59>  ; global constructors keyed to TOD_Layer::TOD_Layer(unsigned short)+0x59
085ff094 +0x74:  jmp    085ff09b <+0x7b>
085ff096 +0x76:  mov    $0x0,%eax
085ff09b +0x7b:  leave
085ff09c +0x7c:  ret
```

## 反编译 C

```c
// TowerOfDespair_APC_Mgr::Get_APC_Name_byIndex @ 0x85ff020

/* TowerOfDespair_APC_Mgr::Get_APC_Name_byIndex(TOD_Layer const&) */

undefined4 TowerOfDespair_APC_Mgr::Get_APC_Name_byIndex(TOD_Layer *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_20 [3];
  undefined4 local_14;
  map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
  local_10 [12];
  
  std::_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>> *)&local_14);
  std::
  map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
  ::end(local_10);
  std::
  map<TOD_Layer,SendingAPC_Info,std::less<TOD_Layer>,std::allocator<std::pair<TOD_Layer_const,SendingAPC_Info>>>
  ::find((TOD_Layer *)local_20);
  local_14 = local_20[0];
  cVar1 = std::_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>>::operator!=
                    ((_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>> *)&local_14,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>>::operator->
                      ((_Rb_tree_iterator<std::pair<TOD_Layer_const,SendingAPC_Info>> *)&local_14);
    uVar3 = SendingAPC_Info::get_user_charac_name((SendingAPC_Info *)(iVar2 + 4));
  }
  return uVar3;
}
```

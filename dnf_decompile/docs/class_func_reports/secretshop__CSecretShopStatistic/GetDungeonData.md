# GetDungeonData

`_ZN10secretshop20CSecretShopStatistic14GetDungeonDataEii`

`secretshop::CSecretShopStatistic::GetDungeonData(int, int)`

| 类 | 地址 |
|---|---|
| `secretshop::CSecretShopStatistic` | `0x085fd13e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fd13e  _ZN10secretshop20CSecretShopStatistic14GetDungeonDataEii
#           secretshop::CSecretShopStatistic::GetDungeonData(int, int)
# range [0x085fd13e, 0x085fd277]
085fd13e +0x000:  push   %ebp
085fd13f +0x001:  mov    %esp,%ebp
085fd141 +0x003:  sub    $0x88,%esp
085fd147 +0x009:  mov    0xc(%ebp),%eax
085fd14a +0x00c:  mov    %eax,0x4(%esp)
085fd14e +0x010:  mov    0x8(%ebp),%eax
085fd151 +0x013:  mov    %eax,(%esp)
085fd154 +0x016:  call   085fd024 <_ZN10secretshop20CSecretShopStatistic9GetNpcPosEi>  ; secretshop::CSecretShopStatistic::GetNpcPos(int)
085fd159 +0x01b:  mov    %eax,-0xc(%ebp)
085fd15c +0x01e:  mov    -0xc(%ebp),%edx
085fd15f +0x021:  mov    %edx,%eax
085fd161 +0x023:  add    %eax,%eax
085fd163 +0x025:  add    %edx,%eax
085fd165 +0x027:  shl    $0x3,%eax
085fd168 +0x02a:  mov    %eax,%edx
085fd16a +0x02c:  add    0x8(%ebp),%edx
085fd16d +0x02f:  lea    -0x4c(%ebp),%eax
085fd170 +0x032:  lea    0x10(%ebp),%ecx
085fd173 +0x035:  mov    %ecx,0x8(%esp)
085fd177 +0x039:  mov    %edx,0x4(%esp)
085fd17b +0x03d:  mov    %eax,(%esp)
085fd17e +0x040:  call   085fd4ec <_GLOBAL__I__ZN10secretshop20CSecretShopStatistic5ClearEv+0xaf>  ; global constructors keyed to secretshop::CSecretShopStatistic::Clear()+0xaf
085fd183 +0x045:  sub    $0x4,%esp
085fd186 +0x048:  mov    -0xc(%ebp),%edx
085fd189 +0x04b:  mov    %edx,%eax
085fd18b +0x04d:  add    %eax,%eax
085fd18d +0x04f:  add    %edx,%eax
085fd18f +0x051:  shl    $0x3,%eax
085fd192 +0x054:  mov    %eax,%edx
085fd194 +0x056:  add    0x8(%ebp),%edx
085fd197 +0x059:  lea    -0x48(%ebp),%eax
085fd19a +0x05c:  mov    %edx,0x4(%esp)
085fd19e +0x060:  mov    %eax,(%esp)
085fd1a1 +0x063:  call   085fd518 <_GLOBAL__I__ZN10secretshop20CSecretShopStatistic5ClearEv+0xdb>  ; global constructors keyed to secretshop::CSecretShopStatistic::Clear()+0xdb
085fd1a6 +0x068:  sub    $0x4,%esp
085fd1a9 +0x06b:  lea    -0x48(%ebp),%eax
085fd1ac +0x06e:  mov    %eax,0x4(%esp)
085fd1b0 +0x072:  lea    -0x4c(%ebp),%eax
085fd1b3 +0x075:  mov    %eax,(%esp)
085fd1b6 +0x078:  call   085fd53e <_GLOBAL__I__ZN10secretshop20CSecretShopStatistic5ClearEv+0x101>  ; global constructors keyed to secretshop::CSecretShopStatistic::Clear()+0x101
085fd1bb +0x07d:  test   %al,%al
085fd1bd +0x07f:  je     085fd1d2 <+0x94>
085fd1bf +0x081:  lea    -0x4c(%ebp),%eax
085fd1c2 +0x084:  mov    %eax,(%esp)
085fd1c5 +0x087:  call   085fd552 <_GLOBAL__I__ZN10secretshop20CSecretShopStatistic5ClearEv+0x115>  ; global constructors keyed to secretshop::CSecretShopStatistic::Clear()+0x115
085fd1ca +0x08c:  add    $0x4,%eax
085fd1cd +0x08f:  jmp    085fd276 <+0x138>
085fd1d2 +0x094:  lea    -0x60(%ebp),%eax
085fd1d5 +0x097:  mov    %eax,(%esp)
085fd1d8 +0x09a:  call   085fd45a <_GLOBAL__I__ZN10secretshop20CSecretShopStatistic5ClearEv+0x1d>  ; global constructors keyed to secretshop::CSecretShopStatistic::Clear()+0x1d
085fd1dd +0x09f:  mov    0x10(%ebp),%eax
085fd1e0 +0x0a2:  mov    %eax,-0x60(%ebp)
085fd1e3 +0x0a5:  lea    -0x60(%ebp),%eax
085fd1e6 +0x0a8:  mov    %eax,0x8(%esp)
085fd1ea +0x0ac:  lea    0x10(%ebp),%eax
085fd1ed +0x0af:  mov    %eax,0x4(%esp)
085fd1f1 +0x0b3:  lea    -0x24(%ebp),%eax
085fd1f4 +0x0b6:  mov    %eax,(%esp)
085fd1f7 +0x0b9:  call   085fd560 <_GLOBAL__I__ZN10secretshop20CSecretShopStatistic5ClearEv+0x123>  ; global constructors keyed to secretshop::CSecretShopStatistic::Clear()+0x123
085fd1fc +0x0be:  lea    -0x24(%ebp),%eax
085fd1ff +0x0c1:  mov    %eax,0x4(%esp)
085fd203 +0x0c5:  lea    -0x3c(%ebp),%eax
085fd206 +0x0c8:  mov    %eax,(%esp)
085fd209 +0x0cb:  call   085fd5a6 <_GLOBAL__I__ZN10secretshop20CSecretShopStatistic5ClearEv+0x169>  ; global constructors keyed to secretshop::CSecretShopStatistic::Clear()+0x169
085fd20e +0x0d0:  mov    -0xc(%ebp),%edx
085fd211 +0x0d3:  mov    %edx,%eax
085fd213 +0x0d5:  add    %eax,%eax
085fd215 +0x0d7:  add    %edx,%eax
085fd217 +0x0d9:  shl    $0x3,%eax
085fd21a +0x0dc:  mov    %eax,%edx
085fd21c +0x0de:  add    0x8(%ebp),%edx
085fd21f +0x0e1:  lea    -0x44(%ebp),%eax
085fd222 +0x0e4:  lea    -0x3c(%ebp),%ecx
085fd225 +0x0e7:  mov    %ecx,0x8(%esp)
085fd229 +0x0eb:  mov    %edx,0x4(%esp)
085fd22d +0x0ef:  mov    %eax,(%esp)
085fd230 +0x0f2:  call   085fd5ee <_GLOBAL__I__ZN10secretshop20CSecretShopStatistic5ClearEv+0x1b1>  ; global constructors keyed to secretshop::CSecretShopStatistic::Clear()+0x1b1
085fd235 +0x0f7:  sub    $0x4,%esp
085fd238 +0x0fa:  mov    -0xc(%ebp),%edx
085fd23b +0x0fd:  mov    %edx,%eax
085fd23d +0x0ff:  add    %eax,%eax
085fd23f +0x101:  add    %edx,%eax
085fd241 +0x103:  shl    $0x3,%eax
085fd244 +0x106:  mov    %eax,%edx
085fd246 +0x108:  add    0x8(%ebp),%edx
085fd249 +0x10b:  lea    -0x6c(%ebp),%eax
085fd24c +0x10e:  lea    0x10(%ebp),%ecx
085fd24f +0x111:  mov    %ecx,0x8(%esp)
085fd253 +0x115:  mov    %edx,0x4(%esp)
085fd257 +0x119:  mov    %eax,(%esp)
085fd25a +0x11c:  call   085fd4ec <_GLOBAL__I__ZN10secretshop20CSecretShopStatistic5ClearEv+0xaf>  ; global constructors keyed to secretshop::CSecretShopStatistic::Clear()+0xaf
085fd25f +0x121:  sub    $0x4,%esp
085fd262 +0x124:  mov    -0x6c(%ebp),%eax
085fd265 +0x127:  mov    %eax,-0x4c(%ebp)
085fd268 +0x12a:  lea    -0x4c(%ebp),%eax
085fd26b +0x12d:  mov    %eax,(%esp)
085fd26e +0x130:  call   085fd552 <_GLOBAL__I__ZN10secretshop20CSecretShopStatistic5ClearEv+0x115>  ; global constructors keyed to secretshop::CSecretShopStatistic::Clear()+0x115
085fd273 +0x135:  add    $0x4,%eax
085fd276 +0x138:  leave
085fd277 +0x139:  ret
```

## 反编译 C

```c
// secretshop::CSecretShopStatistic::GetDungeonData @ 0x85fd13e

/* secretshop::CSecretShopStatistic::GetDungeonData(int, int) */

int __thiscall
secretshop::CSecretShopStatistic::GetDungeonData(CSecretShopStatistic *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int local_70 [3];
  int local_64 [5];
  int local_50;
  map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
  local_4c [4];
  pair local_48 [8];
  pair<int_const,SECRET_SHOP_STATISTIC_DATA> local_40 [24];
  pair<int,SECRET_SHOP_STATISTIC_DATA> local_28 [24];
  undefined4 local_10;
  
  local_10 = GetNpcPos(this,param_1);
  std::
  map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
  ::find(&local_50);
  std::
  map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
  ::end(local_4c);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>::operator!=
                    ((_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>> *)&local_50
                     ,(_Rb_tree_iterator *)local_4c);
  if (cVar1 == '\0') {
    SECRET_SHOP_STATISTIC_DATA::SECRET_SHOP_STATISTIC_DATA((SECRET_SHOP_STATISTIC_DATA *)local_64);
    local_64[0] = param_2;
    std::pair<int,SECRET_SHOP_STATISTIC_DATA>::pair<int&,SECRET_SHOP_STATISTIC_DATA&>
              (local_28,&param_2,(SECRET_SHOP_STATISTIC_DATA *)local_64);
    std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>::pair<int,SECRET_SHOP_STATISTIC_DATA>
              (local_40,local_28);
    std::
    map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
    ::insert(local_48);
    std::
    map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
    ::find(local_70);
    local_50 = local_70[0];
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>> *)
                       &local_50);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>> *)
                       &local_50);
  }
  return iVar2 + 4;
}
```

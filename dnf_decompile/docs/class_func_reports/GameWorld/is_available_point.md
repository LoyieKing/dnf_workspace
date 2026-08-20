# is_available_point

`_ZNK9GameWorld18is_available_pointEiiii`

`GameWorld::is_available_point(int, int, int, int) const`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c4814` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c4814  _ZNK9GameWorld18is_available_pointEiiii
#           GameWorld::is_available_point(int, int, int, int) const
# range [0x086c4814, 0x086c497b]
086c4814 +0x000:  push   %ebp
086c4815 +0x001:  mov    %esp,%ebp
086c4817 +0x003:  sub    $0x28,%esp
086c481a +0x006:  cmpl   $0x0,0xc(%ebp)
086c481e +0x00a:  js     086c482a <+0x16>
086c4820 +0x00c:  mov    &MAX_VILLAGE_NUM,%eax
086c4825 +0x011:  cmp    %eax,0xc(%ebp)
086c4828 +0x014:  jl     086c4834 <+0x20>
086c482a +0x016:  mov    $0x0,%eax
086c482f +0x01b:  jmp    086c497a <+0x166>
086c4834 +0x020:  mov    0x8(%ebp),%eax
086c4837 +0x023:  mov    0x1c(%eax),%edx
086c483a +0x026:  mov    0xc(%ebp),%eax
086c483d +0x029:  imul   $0x34,%eax,%eax
086c4840 +0x02c:  add    %eax,%edx
086c4842 +0x02e:  mov    0x10(%ebp),%eax
086c4845 +0x031:  mov    %eax,0x4(%esp)
086c4849 +0x035:  mov    %edx,(%esp)
086c484c +0x038:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c4851 +0x03d:  add    $0x7c,%eax
086c4854 +0x040:  mov    %eax,(%esp)
086c4857 +0x043:  call   086d3e46 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2677>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2677
086c485c +0x048:  test   %al,%al
086c485e +0x04a:  je     086c486a <+0x56>
086c4860 +0x04c:  mov    $0x0,%eax
086c4865 +0x051:  jmp    086c497a <+0x166>
086c486a +0x056:  mov    0x8(%ebp),%eax
086c486d +0x059:  mov    0x1c(%eax),%edx
086c4870 +0x05c:  mov    0xc(%ebp),%eax
086c4873 +0x05f:  imul   $0x34,%eax,%eax
086c4876 +0x062:  add    %eax,%edx
086c4878 +0x064:  mov    0x10(%ebp),%eax
086c487b +0x067:  mov    %eax,0x4(%esp)
086c487f +0x06b:  mov    %edx,(%esp)
086c4882 +0x06e:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c4887 +0x073:  test   %eax,%eax
086c4889 +0x075:  sete   %al
086c488c +0x078:  test   %al,%al
086c488e +0x07a:  je     086c489a <+0x86>
086c4890 +0x07c:  mov    $0x0,%eax
086c4895 +0x081:  jmp    086c497a <+0x166>
086c489a +0x086:  mov    0x8(%ebp),%eax
086c489d +0x089:  mov    0x1c(%eax),%edx
086c48a0 +0x08c:  mov    0xc(%ebp),%eax
086c48a3 +0x08f:  imul   $0x34,%eax,%eax
086c48a6 +0x092:  add    %eax,%edx
086c48a8 +0x094:  mov    0x10(%ebp),%eax
086c48ab +0x097:  mov    %eax,0x4(%esp)
086c48af +0x09b:  mov    %edx,(%esp)
086c48b2 +0x09e:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c48b7 +0x0a3:  add    $0x7c,%eax
086c48ba +0x0a6:  mov    %eax,-0x10(%ebp)
086c48bd +0x0a9:  mov    -0x10(%ebp),%eax
086c48c0 +0x0ac:  mov    %eax,(%esp)
086c48c3 +0x0af:  call   086d3e46 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2677>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2677
086c48c8 +0x0b4:  xor    $0x1,%eax
086c48cb +0x0b7:  test   %al,%al
086c48cd +0x0b9:  je     086c4975 <+0x161>
086c48d3 +0x0bf:  lea    -0x18(%ebp),%eax
086c48d6 +0x0c2:  mov    -0x10(%ebp),%edx
086c48d9 +0x0c5:  mov    %edx,0x4(%esp)
086c48dd +0x0c9:  mov    %eax,(%esp)
086c48e0 +0x0cc:  call   086d3e8a <_GLOBAL__I_MAX_VILLAGE_NUM+0x26bb>  ; global constructors keyed to MAX_VILLAGE_NUM+0x26bb
086c48e5 +0x0d1:  sub    $0x4,%esp
086c48e8 +0x0d4:  jmp    086c4946 <+0x132>
086c48ea +0x0d6:  lea    -0x18(%ebp),%eax
086c48ed +0x0d9:  mov    %eax,(%esp)
086c48f0 +0x0dc:  call   086d3f16 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2747>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2747
086c48f5 +0x0e1:  mov    %eax,-0xc(%ebp)
086c48f8 +0x0e4:  mov    -0xc(%ebp),%eax
086c48fb +0x0e7:  mov    (%eax),%eax
086c48fd +0x0e9:  cmp    0x14(%ebp),%eax
086c4900 +0x0ec:  jg     086c493b <+0x127>
086c4902 +0x0ee:  mov    -0xc(%ebp),%eax
086c4905 +0x0f1:  mov    (%eax),%edx
086c4907 +0x0f3:  mov    -0xc(%ebp),%eax
086c490a +0x0f6:  mov    0x8(%eax),%eax
086c490d +0x0f9:  lea    (%edx,%eax,1),%eax
086c4910 +0x0fc:  cmp    0x14(%ebp),%eax
086c4913 +0x0ff:  jl     086c493b <+0x127>
086c4915 +0x101:  mov    -0xc(%ebp),%eax
086c4918 +0x104:  mov    0x4(%eax),%eax
086c491b +0x107:  cmp    0x18(%ebp),%eax
086c491e +0x10a:  jg     086c493b <+0x127>
086c4920 +0x10c:  mov    -0xc(%ebp),%eax
086c4923 +0x10f:  mov    0x4(%eax),%edx
086c4926 +0x112:  mov    -0xc(%ebp),%eax
086c4929 +0x115:  mov    0xc(%eax),%eax
086c492c +0x118:  lea    (%edx,%eax,1),%eax
086c492f +0x11b:  cmp    0x18(%ebp),%eax
086c4932 +0x11e:  jl     086c493b <+0x127>
086c4934 +0x120:  mov    $0x1,%eax
086c4939 +0x125:  jmp    086c497a <+0x166>
086c493b +0x127:  lea    -0x18(%ebp),%eax
086c493e +0x12a:  mov    %eax,(%esp)
086c4941 +0x12d:  call   086d3f00 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2731>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2731
086c4946 +0x132:  lea    -0x14(%ebp),%eax
086c4949 +0x135:  mov    -0x10(%ebp),%edx
086c494c +0x138:  mov    %edx,0x4(%esp)
086c4950 +0x13c:  mov    %eax,(%esp)
086c4953 +0x13f:  call   086d3eae <_GLOBAL__I_MAX_VILLAGE_NUM+0x26df>  ; global constructors keyed to MAX_VILLAGE_NUM+0x26df
086c4958 +0x144:  sub    $0x4,%esp
086c495b +0x147:  lea    -0x14(%ebp),%eax
086c495e +0x14a:  mov    %eax,0x4(%esp)
086c4962 +0x14e:  lea    -0x18(%ebp),%eax
086c4965 +0x151:  mov    %eax,(%esp)
086c4968 +0x154:  call   086d3ed4 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2705>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2705
086c496d +0x159:  test   %al,%al
086c496f +0x15b:  jne    086c48ea <+0xd6>
086c4975 +0x161:  mov    $0x0,%eax
086c497a +0x166:  leave
086c497b +0x167:  ret
```

## 反编译 C

```c
// GameWorld::is_available_point @ 0x86c4814

/* GameWorld::is_available_point(int, int, int, int) const */

undefined4 __thiscall
GameWorld::is_available_point(GameWorld *this,int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  __normal_iterator<MapArea*,std::vector<MapArea,std::allocator<MapArea>>> local_1c [4];
  __normal_iterator local_18 [4];
  int local_14;
  int *local_10;
  
  if ((-1 < param_1) && (param_1 < MAX_VILLAGE_NUM)) {
    Village::getArea((Village *)(*(int *)(this + 0x1c) + param_1 * 0x34),param_2);
    cVar1 = std::vector<MapArea,std::allocator<MapArea>>::empty();
    if ((cVar1 == '\0') &&
       (iVar3 = Village::getArea((Village *)(*(int *)(this + 0x1c) + param_1 * 0x34),param_2),
       iVar3 != 0)) {
      local_14 = Village::getArea((Village *)(*(int *)(this + 0x1c) + param_1 * 0x34),param_2);
      local_14 = local_14 + 0x7c;
      cVar1 = std::vector<MapArea,std::allocator<MapArea>>::empty();
      if (cVar1 != '\x01') {
        std::vector<MapArea,std::allocator<MapArea>>::begin();
        while( true ) {
          std::vector<MapArea,std::allocator<MapArea>>::end();
          bVar2 = __gnu_cxx::operator!=(local_1c,local_18);
          if (!bVar2) break;
          local_10 = (int *)__gnu_cxx::
                            __normal_iterator<MapArea*,std::vector<MapArea,std::allocator<MapArea>>>
                            ::operator*(local_1c);
          if ((((*local_10 <= param_3) && (param_3 <= *local_10 + local_10[2])) &&
              (local_10[1] <= param_4)) && (param_4 <= local_10[1] + local_10[3])) {
            return 1;
          }
          __gnu_cxx::__normal_iterator<MapArea*,std::vector<MapArea,std::allocator<MapArea>>>::
          operator++(local_1c);
        }
      }
    }
  }
  return 0;
}
```

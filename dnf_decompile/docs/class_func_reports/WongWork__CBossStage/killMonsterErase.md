# killMonsterErase

`_ZN8WongWork10CBossStage16killMonsterEraseEtR11map_monsterRi`

`WongWork::CBossStage::killMonsterErase(unsigned short, map_monster&, int&)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossStage` | `0x0814d214` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814d214  _ZN8WongWork10CBossStage16killMonsterEraseEtR11map_monsterRi
#           WongWork::CBossStage::killMonsterErase(unsigned short, map_monster&, int&)
# range [0x0814d214, 0x0814d2ff]
0814d214 +0x00:  push   %ebp
0814d215 +0x01:  mov    %esp,%ebp
0814d217 +0x03:  sub    $0x48,%esp
0814d21a +0x06:  mov    0xc(%ebp),%eax
0814d21d +0x09:  mov    %ax,-0x2c(%ebp)
0814d221 +0x0d:  movzwl -0x2c(%ebp),%eax
0814d225 +0x11:  mov    %eax,-0x18(%ebp)
0814d228 +0x14:  mov    0x8(%ebp),%eax
0814d22b +0x17:  lea    0xa00(%eax),%ecx
0814d231 +0x1d:  lea    -0x1c(%ebp),%eax
0814d234 +0x20:  lea    -0x18(%ebp),%edx
0814d237 +0x23:  mov    %edx,0x8(%esp)
0814d23b +0x27:  mov    %ecx,0x4(%esp)
0814d23f +0x2b:  mov    %eax,(%esp)
0814d242 +0x2e:  call   0815245a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d8f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d8f
0814d247 +0x33:  sub    $0x4,%esp
0814d24a +0x36:  lea    -0x1c(%ebp),%eax
0814d24d +0x39:  mov    %eax,0x4(%esp)
0814d251 +0x3d:  lea    -0x20(%ebp),%eax
0814d254 +0x40:  mov    %eax,(%esp)
0814d257 +0x43:  call   081529e0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2315>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2315
0814d25c +0x48:  mov    0x8(%ebp),%eax
0814d25f +0x4b:  lea    0xa00(%eax),%edx
0814d265 +0x51:  lea    -0x10(%ebp),%eax
0814d268 +0x54:  mov    %edx,0x4(%esp)
0814d26c +0x58:  mov    %eax,(%esp)
0814d26f +0x5b:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
0814d274 +0x60:  sub    $0x4,%esp
0814d277 +0x63:  lea    -0x10(%ebp),%eax
0814d27a +0x66:  mov    %eax,0x4(%esp)
0814d27e +0x6a:  lea    -0x14(%ebp),%eax
0814d281 +0x6d:  mov    %eax,(%esp)
0814d284 +0x70:  call   081529e0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2315>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2315
0814d289 +0x75:  lea    -0x14(%ebp),%eax
0814d28c +0x78:  mov    %eax,0x4(%esp)
0814d290 +0x7c:  lea    -0x20(%ebp),%eax
0814d293 +0x7f:  mov    %eax,(%esp)
0814d296 +0x82:  call   081529f0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2325>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2325
0814d29b +0x87:  test   %al,%al
0814d29d +0x89:  je     0814d2f9 <+0xe5>
0814d29f +0x8b:  lea    -0x20(%ebp),%eax
0814d2a2 +0x8e:  mov    %eax,(%esp)
0814d2a5 +0x91:  call   08152a04 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2339>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2339
0814d2aa +0x96:  add    $0x4,%eax
0814d2ad +0x99:  mov    %eax,0x4(%esp)
0814d2b1 +0x9d:  mov    0x10(%ebp),%eax
0814d2b4 +0xa0:  mov    %eax,(%esp)
0814d2b7 +0xa3:  call   08151d3a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x166f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x166f
0814d2bc +0xa8:  lea    -0x20(%ebp),%eax
0814d2bf +0xab:  mov    %eax,(%esp)
0814d2c2 +0xae:  call   08152a04 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2339>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2339
0814d2c7 +0xb3:  movzbl 0x14(%eax),%eax
0814d2cb +0xb7:  movzbl %al,%edx
0814d2ce +0xba:  mov    0x14(%ebp),%eax
0814d2d1 +0xbd:  mov    %edx,(%eax)
0814d2d3 +0xbf:  movzwl -0x2c(%ebp),%eax
0814d2d7 +0xc3:  mov    %eax,-0xc(%ebp)
0814d2da +0xc6:  mov    0x8(%ebp),%eax
0814d2dd +0xc9:  lea    0xa00(%eax),%edx
0814d2e3 +0xcf:  lea    -0xc(%ebp),%eax
0814d2e6 +0xd2:  mov    %eax,0x4(%esp)
0814d2ea +0xd6:  mov    %edx,(%esp)
0814d2ed +0xd9:  call   08152a12 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2347>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2347
0814d2f2 +0xde:  mov    $0x1,%eax
0814d2f7 +0xe3:  jmp    0814d2fe <+0xea>
0814d2f9 +0xe5:  mov    $0x0,%eax
0814d2fe +0xea:  leave
0814d2ff +0xeb:  ret
```

## 反编译 C

```c
// WongWork::CBossStage::killMonsterErase @ 0x814d214

/* WongWork::CBossStage::killMonsterErase(unsigned short, map_monster&, int&) */

bool __thiscall
WongWork::CBossStage::killMonsterErase
          (CBossStage *this,ushort param_1,map_monster *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<int_const,map_monster>> local_24 [4];
  _Rb_tree_iterator local_20 [4];
  uint local_1c;
  _Rb_tree_const_iterator<std::pair<int_const,map_monster>> local_18 [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_14 [4];
  uint local_10;
  
  local_1c = (uint)param_1;
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::find
            ((int *)local_20);
  std::_Rb_tree_const_iterator<std::pair<int_const,map_monster>>::_Rb_tree_const_iterator
            (local_24,local_20);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
            (local_14);
  std::_Rb_tree_const_iterator<std::pair<int_const,map_monster>>::_Rb_tree_const_iterator
            (local_18,(_Rb_tree_iterator *)local_14);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,map_monster>>::operator!=
                    (local_24,(_Rb_tree_const_iterator *)local_18);
  if (cVar1 != '\0') {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,map_monster>>::operator->(local_24);
    map_monster::operator=(param_2,(map_monster *)(iVar2 + 4));
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,map_monster>>::operator->(local_24);
    *param_3 = (uint)*(byte *)(iVar2 + 0x14);
    local_10 = (uint)param_1;
    std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::erase
              ((int *)(this + 0xa00));
  }
  return cVar1 != '\0';
}
```

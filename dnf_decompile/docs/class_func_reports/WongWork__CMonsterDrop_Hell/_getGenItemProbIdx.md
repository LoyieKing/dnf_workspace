# _getGenItemProbIdx

`_ZN8WongWork17CMonsterDrop_Hell18_getGenItemProbIdxEi`

`WongWork::CMonsterDrop_Hell::_getGenItemProbIdx(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CMonsterDrop_Hell` | `0x08535a88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08535a88  _ZN8WongWork17CMonsterDrop_Hell18_getGenItemProbIdxEi
#           WongWork::CMonsterDrop_Hell::_getGenItemProbIdx(int)
# range [0x08535a88, 0x08535b07]
08535a88 +0x00:  push   %ebp
08535a89 +0x01:  mov    %esp,%ebp
08535a8b +0x03:  sub    $0x28,%esp
08535a8e +0x06:  movl   $0x0,-0x10(%ebp)
08535a95 +0x0d:  jmp    08535ac8 <+0x40>
08535a97 +0x0f:  mov    0x8(%ebp),%eax
08535a9a +0x12:  lea    0x24(%eax),%edx
08535a9d +0x15:  mov    -0x10(%ebp),%eax
08535aa0 +0x18:  mov    %eax,0x4(%esp)
08535aa4 +0x1c:  mov    %edx,(%esp)
08535aa7 +0x1f:  call   0853b0a0 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x132c>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x132c
08535aac +0x24:  mov    %eax,-0xc(%ebp)
08535aaf +0x27:  mov    -0xc(%ebp),%eax
08535ab2 +0x2a:  mov    (%eax),%eax
08535ab4 +0x2c:  cmp    0xc(%ebp),%eax
08535ab7 +0x2f:  jg     08535ac4 <+0x3c>
08535ab9 +0x31:  mov    -0xc(%ebp),%eax
08535abc +0x34:  mov    0x4(%eax),%eax
08535abf +0x37:  cmp    0xc(%ebp),%eax
08535ac2 +0x3a:  jge    08535ae2 <+0x5a>
08535ac4 +0x3c:  addl   $0x1,-0x10(%ebp)
08535ac8 +0x40:  mov    0x8(%ebp),%eax
08535acb +0x43:  add    $0x24,%eax
08535ace +0x46:  mov    %eax,(%esp)
08535ad1 +0x49:  call   0853b07e <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x130a>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x130a
08535ad6 +0x4e:  cmp    -0x10(%ebp),%eax
08535ad9 +0x51:  seta   %al
08535adc +0x54:  test   %al,%al
08535ade +0x56:  jne    08535a97 <+0xf>
08535ae0 +0x58:  jmp    08535ae3 <+0x5b>
08535ae2 +0x5a:  nop
08535ae3 +0x5b:  mov    0x8(%ebp),%eax
08535ae6 +0x5e:  add    $0x24,%eax
08535ae9 +0x61:  mov    %eax,(%esp)
08535aec +0x64:  call   0853b07e <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x130a>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x130a
08535af1 +0x69:  cmp    -0x10(%ebp),%eax
08535af4 +0x6c:  setbe  %al
08535af7 +0x6f:  test   %al,%al
08535af9 +0x71:  je     08535b02 <+0x7a>
08535afb +0x73:  mov    $0xffffffff,%eax
08535b00 +0x78:  jmp    08535b05 <+0x7d>
08535b02 +0x7a:  mov    -0x10(%ebp),%eax
08535b05 +0x7d:  leave
08535b06 +0x7e:  ret
08535b07 +0x7f:  nop
```

## 反编译 C

```c
// WongWork::CMonsterDrop_Hell::_getGenItemProbIdx @ 0x8535a88

/* WongWork::CMonsterDrop_Hell::_getGenItemProbIdx(int) */

uint __thiscall WongWork::CMonsterDrop_Hell::_getGenItemProbIdx(CMonsterDrop_Hell *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  uint local_14;
  
  local_14 = 0;
  while ((uVar2 = std::
                  vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                  ::size((vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                          *)(this + 0x24)), local_14 < uVar2 &&
         ((piVar1 = (int *)std::
                           vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                           ::operator[]((vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                                         *)(this + 0x24),local_14), param_1 < *piVar1 ||
          (piVar1[1] < param_1))))) {
    local_14 = local_14 + 1;
  }
  uVar2 = std::
          vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
          ::size((vector<WongWork::CMonsterDrop_Hell::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop_Hell::stGenItemProb_t>>
                  *)(this + 0x24));
  if (uVar2 <= local_14) {
    local_14 = 0xffffffff;
  }
  return local_14;
}
```

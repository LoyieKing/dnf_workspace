# getCurRewardItem

`_ZN4ARAD6SCRIPT18AradJumping_Script16getCurRewardItemEiiRm`

`ARAD::SCRIPT::AradJumping_Script::getCurRewardItem(int, int, unsigned long&)`

| 类 | 地址 |
|---|---|
| `ARAD::SCRIPT::AradJumping_Script` | `0x088b424a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088b424a  _ZN4ARAD6SCRIPT18AradJumping_Script16getCurRewardItemEiiRm
#           ARAD::SCRIPT::AradJumping_Script::getCurRewardItem(int, int, unsigned long&)
# range [0x088b424a, 0x088b430a]
088b424a +0x00:  push   %ebp
088b424b +0x01:  mov    %esp,%ebp
088b424d +0x03:  sub    $0x28,%esp
088b4250 +0x06:  mov    0x8(%ebp),%edx
088b4253 +0x09:  lea    -0xc(%ebp),%eax
088b4256 +0x0c:  mov    %edx,0x4(%esp)
088b425a +0x10:  mov    %eax,(%esp)
088b425d +0x13:  call   088b4616 <_GLOBAL__I__ZN4ARAD6SCRIPT8readTimeEPs+0x2cb>  ; global constructors keyed to ARAD::SCRIPT::readTime(short*)+0x2cb
088b4262 +0x18:  sub    $0x4,%esp
088b4265 +0x1b:  mov    0x8(%ebp),%edx
088b4268 +0x1e:  lea    -0x10(%ebp),%eax
088b426b +0x21:  mov    %edx,0x4(%esp)
088b426f +0x25:  mov    %eax,(%esp)
088b4272 +0x28:  call   088b463a <_GLOBAL__I__ZN4ARAD6SCRIPT8readTimeEPs+0x2ef>  ; global constructors keyed to ARAD::SCRIPT::readTime(short*)+0x2ef
088b4277 +0x2d:  sub    $0x4,%esp
088b427a +0x30:  jmp    088b42d1 <+0x87>
088b427c +0x32:  lea    -0xc(%ebp),%eax
088b427f +0x35:  mov    %eax,(%esp)
088b4282 +0x38:  call   088b46a2 <_GLOBAL__I__ZN4ARAD6SCRIPT8readTimeEPs+0x357>  ; global constructors keyed to ARAD::SCRIPT::readTime(short*)+0x357
088b4287 +0x3d:  mov    (%eax),%eax
088b4289 +0x3f:  cmp    0xc(%ebp),%eax
088b428c +0x42:  jne    088b42a8 <+0x5e>
088b428e +0x44:  lea    -0xc(%ebp),%eax
088b4291 +0x47:  mov    %eax,(%esp)
088b4294 +0x4a:  call   088b46a2 <_GLOBAL__I__ZN4ARAD6SCRIPT8readTimeEPs+0x357>  ; global constructors keyed to ARAD::SCRIPT::readTime(short*)+0x357
088b4299 +0x4f:  mov    0x4(%eax),%eax
088b429c +0x52:  cmp    0x10(%ebp),%eax
088b429f +0x55:  jne    088b42a8 <+0x5e>
088b42a1 +0x57:  mov    $0x1,%eax
088b42a6 +0x5c:  jmp    088b42ad <+0x63>
088b42a8 +0x5e:  mov    $0x0,%eax
088b42ad +0x63:  test   %al,%al
088b42af +0x65:  je     088b42c6 <+0x7c>
088b42b1 +0x67:  lea    -0xc(%ebp),%eax
088b42b4 +0x6a:  mov    %eax,(%esp)
088b42b7 +0x6d:  call   088b46a2 <_GLOBAL__I__ZN4ARAD6SCRIPT8readTimeEPs+0x357>  ; global constructors keyed to ARAD::SCRIPT::readTime(short*)+0x357
088b42bc +0x72:  mov    0x8(%eax),%edx
088b42bf +0x75:  mov    0x14(%ebp),%eax
088b42c2 +0x78:  mov    %edx,(%eax)
088b42c4 +0x7a:  jmp    088b42e7 <+0x9d>
088b42c6 +0x7c:  lea    -0xc(%ebp),%eax
088b42c9 +0x7f:  mov    %eax,(%esp)
088b42cc +0x82:  call   088b468c <_GLOBAL__I__ZN4ARAD6SCRIPT8readTimeEPs+0x341>  ; global constructors keyed to ARAD::SCRIPT::readTime(short*)+0x341
088b42d1 +0x87:  lea    -0x10(%ebp),%eax
088b42d4 +0x8a:  mov    %eax,0x4(%esp)
088b42d8 +0x8e:  lea    -0xc(%ebp),%eax
088b42db +0x91:  mov    %eax,(%esp)
088b42de +0x94:  call   088b4660 <_GLOBAL__I__ZN4ARAD6SCRIPT8readTimeEPs+0x315>  ; global constructors keyed to ARAD::SCRIPT::readTime(short*)+0x315
088b42e3 +0x99:  test   %al,%al
088b42e5 +0x9b:  jne    088b427c <+0x32>
088b42e7 +0x9d:  lea    -0x10(%ebp),%eax
088b42ea +0xa0:  mov    %eax,0x4(%esp)
088b42ee +0xa4:  lea    -0xc(%ebp),%eax
088b42f1 +0xa7:  mov    %eax,(%esp)
088b42f4 +0xaa:  call   088b4660 <_GLOBAL__I__ZN4ARAD6SCRIPT8readTimeEPs+0x315>  ; global constructors keyed to ARAD::SCRIPT::readTime(short*)+0x315
088b42f9 +0xaf:  test   %al,%al
088b42fb +0xb1:  je     088b4304 <+0xba>
088b42fd +0xb3:  mov    $0x1,%eax
088b4302 +0xb8:  jmp    088b4309 <+0xbf>
088b4304 +0xba:  mov    $0x0,%eax
088b4309 +0xbf:  leave
088b430a +0xc0:  ret
```

## 反编译 C

```c
// ARAD::SCRIPT::AradJumping_Script::getCurRewardItem @ 0x88b424a

/* ARAD::SCRIPT::AradJumping_Script::getCurRewardItem(int, int, unsigned long&) */

bool __thiscall
ARAD::SCRIPT::AradJumping_Script::getCurRewardItem
          (AradJumping_Script *this,int param_1,int param_2,ulong *param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  __normal_iterator local_14 [4];
  __normal_iterator<ARAD::SCRIPT::_AradJumpingRewardItem*,std::vector<ARAD::SCRIPT::_AradJumpingRewardItem,std::allocator<ARAD::SCRIPT::_AradJumpingRewardItem>>>
  local_10 [12];
  
  std::
  vector<ARAD::SCRIPT::_AradJumpingRewardItem,std::allocator<ARAD::SCRIPT::_AradJumpingRewardItem>>
  ::begin();
  std::
  vector<ARAD::SCRIPT::_AradJumpingRewardItem,std::allocator<ARAD::SCRIPT::_AradJumpingRewardItem>>
  ::end();
  do {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) {
LAB_088b42e7:
      bVar1 = __gnu_cxx::operator!=(local_10,local_14);
      return bVar1;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<ARAD::SCRIPT::_AradJumpingRewardItem*,std::vector<ARAD::SCRIPT::_AradJumpingRewardItem,std::allocator<ARAD::SCRIPT::_AradJumpingRewardItem>>>
                    ::operator->(local_10);
    if ((*piVar2 == param_1) &&
       (iVar3 = __gnu_cxx::
                __normal_iterator<ARAD::SCRIPT::_AradJumpingRewardItem*,std::vector<ARAD::SCRIPT::_AradJumpingRewardItem,std::allocator<ARAD::SCRIPT::_AradJumpingRewardItem>>>
                ::operator->(local_10), *(int *)(iVar3 + 4) == param_2)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      iVar3 = __gnu_cxx::
              __normal_iterator<ARAD::SCRIPT::_AradJumpingRewardItem*,std::vector<ARAD::SCRIPT::_AradJumpingRewardItem,std::allocator<ARAD::SCRIPT::_AradJumpingRewardItem>>>
              ::operator->(local_10);
      *param_3 = *(ulong *)(iVar3 + 8);
      goto LAB_088b42e7;
    }
    __gnu_cxx::
    __normal_iterator<ARAD::SCRIPT::_AradJumpingRewardItem*,std::vector<ARAD::SCRIPT::_AradJumpingRewardItem,std::allocator<ARAD::SCRIPT::_AradJumpingRewardItem>>>
    ::operator++(local_10);
  } while( true );
}
```

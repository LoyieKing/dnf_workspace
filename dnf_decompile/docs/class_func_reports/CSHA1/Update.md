# Update

`_ZN5CSHA16UpdateEPKhj`

`CSHA1::Update(unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `CSHA1` | `0x0808a19e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808a19e  _ZN5CSHA16UpdateEPKhj
#           CSHA1::Update(unsigned char const*, unsigned int)
# range [0x0808a19e, 0x0808a2d1]
0808a19e +0x000:  push   %ebp
0808a19f +0x001:  mov    %esp,%ebp
0808a1a1 +0x003:  sub    $0x28,%esp
0808a1a4 +0x006:  mov    0x8(%ebp),%eax
0808a1a7 +0x009:  mov    0x14(%eax),%eax
0808a1aa +0x00c:  shr    $0x3,%eax
0808a1ad +0x00f:  and    $0x3f,%eax
0808a1b0 +0x012:  mov    %eax,-0x10(%ebp)
0808a1b3 +0x015:  mov    0x8(%ebp),%eax
0808a1b6 +0x018:  mov    0x14(%eax),%eax
0808a1b9 +0x01b:  mov    0x10(%ebp),%edx
0808a1bc +0x01e:  shl    $0x3,%edx
0808a1bf +0x021:  lea    (%eax,%edx,1),%edx
0808a1c2 +0x024:  mov    0x8(%ebp),%eax
0808a1c5 +0x027:  mov    %edx,0x14(%eax)
0808a1c8 +0x02a:  mov    0x8(%ebp),%eax
0808a1cb +0x02d:  mov    0x14(%eax),%eax
0808a1ce +0x030:  mov    0x10(%ebp),%edx
0808a1d1 +0x033:  shl    $0x3,%edx
0808a1d4 +0x036:  cmp    %edx,%eax
0808a1d6 +0x038:  setb   %al
0808a1d9 +0x03b:  test   %al,%al
0808a1db +0x03d:  je     0808a1ec <+0x4e>
0808a1dd +0x03f:  mov    0x8(%ebp),%eax
0808a1e0 +0x042:  mov    0x18(%eax),%eax
0808a1e3 +0x045:  lea    0x1(%eax),%edx
0808a1e6 +0x048:  mov    0x8(%ebp),%eax
0808a1e9 +0x04b:  mov    %edx,0x18(%eax)
0808a1ec +0x04e:  mov    0x8(%ebp),%eax
0808a1ef +0x051:  mov    0x18(%eax),%eax
0808a1f2 +0x054:  mov    0x10(%ebp),%edx
0808a1f5 +0x057:  shr    $0x1d,%edx
0808a1f8 +0x05a:  lea    (%eax,%edx,1),%edx
0808a1fb +0x05d:  mov    0x8(%ebp),%eax
0808a1fe +0x060:  mov    %edx,0x18(%eax)
0808a201 +0x063:  mov    0x10(%ebp),%eax
0808a204 +0x066:  mov    -0x10(%ebp),%edx
0808a207 +0x069:  lea    (%edx,%eax,1),%eax
0808a20a +0x06c:  cmp    $0x3f,%eax
0808a20d +0x06f:  jbe    0808a296 <+0xf8>
0808a213 +0x075:  mov    $0x40,%eax
0808a218 +0x07a:  sub    -0x10(%ebp),%eax
0808a21b +0x07d:  mov    %eax,-0xc(%ebp)
0808a21e +0x080:  mov    -0x10(%ebp),%eax
0808a221 +0x083:  add    $0x20,%eax
0808a224 +0x086:  add    0x8(%ebp),%eax
0808a227 +0x089:  mov    -0xc(%ebp),%edx
0808a22a +0x08c:  mov    %edx,0x8(%esp)
0808a22e +0x090:  mov    0xc(%ebp),%edx
0808a231 +0x093:  mov    %edx,0x4(%esp)
0808a235 +0x097:  mov    %eax,(%esp)
0808a238 +0x09a:  call   0807d8a0 <_init+0x198>
0808a23d +0x09f:  mov    0x8(%ebp),%eax
0808a240 +0x0a2:  lea    0x20(%eax),%edx
0808a243 +0x0a5:  mov    0x8(%ebp),%eax
0808a246 +0x0a8:  mov    %edx,0x8(%esp)
0808a24a +0x0ac:  mov    %eax,0x4(%esp)
0808a24e +0x0b0:  mov    0x8(%ebp),%eax
0808a251 +0x0b3:  mov    %eax,(%esp)
0808a254 +0x0b6:  call   08087daa <_ZN5CSHA19TransformEPjPKh>  ; CSHA1::Transform(unsigned int*, unsigned char const*)
0808a259 +0x0bb:  jmp    0808a27d <+0xdf>
0808a25b +0x0bd:  mov    -0xc(%ebp),%eax
0808a25e +0x0c0:  mov    0xc(%ebp),%edx
0808a261 +0x0c3:  add    %eax,%edx
0808a263 +0x0c5:  mov    0x8(%ebp),%eax
0808a266 +0x0c8:  mov    %edx,0x8(%esp)
0808a26a +0x0cc:  mov    %eax,0x4(%esp)
0808a26e +0x0d0:  mov    0x8(%ebp),%eax
0808a271 +0x0d3:  mov    %eax,(%esp)
0808a274 +0x0d6:  call   08087daa <_ZN5CSHA19TransformEPjPKh>  ; CSHA1::Transform(unsigned int*, unsigned char const*)
0808a279 +0x0db:  addl   $0x40,-0xc(%ebp)
0808a27d +0x0df:  mov    -0xc(%ebp),%eax
0808a280 +0x0e2:  add    $0x3f,%eax
0808a283 +0x0e5:  cmp    0x10(%ebp),%eax
0808a286 +0x0e8:  setb   %al
0808a289 +0x0eb:  test   %al,%al
0808a28b +0x0ed:  jne    0808a25b <+0xbd>
0808a28d +0x0ef:  movl   $0x0,-0x10(%ebp)
0808a294 +0x0f6:  jmp    0808a29d <+0xff>
0808a296 +0x0f8:  movl   $0x0,-0xc(%ebp)
0808a29d +0x0ff:  mov    0x10(%ebp),%eax
0808a2a0 +0x102:  cmp    -0xc(%ebp),%eax
0808a2a3 +0x105:  je     0808a2d0 <+0x132>
0808a2a5 +0x107:  mov    -0xc(%ebp),%eax
0808a2a8 +0x10a:  mov    0x10(%ebp),%edx
0808a2ab +0x10d:  mov    %edx,%ecx
0808a2ad +0x10f:  sub    %eax,%ecx
0808a2af +0x111:  mov    -0xc(%ebp),%eax
0808a2b2 +0x114:  mov    0xc(%ebp),%edx
0808a2b5 +0x117:  add    %eax,%edx
0808a2b7 +0x119:  mov    -0x10(%ebp),%eax
0808a2ba +0x11c:  add    $0x20,%eax
0808a2bd +0x11f:  add    0x8(%ebp),%eax
0808a2c0 +0x122:  mov    %ecx,0x8(%esp)
0808a2c4 +0x126:  mov    %edx,0x4(%esp)
0808a2c8 +0x12a:  mov    %eax,(%esp)
0808a2cb +0x12d:  call   0807d8a0 <_init+0x198>
0808a2d0 +0x132:  leave
0808a2d1 +0x133:  ret
```

## 反编译 C

```c
// CSHA1::Update @ 0x808a19e

/* CSHA1::Update(unsigned char const*, unsigned int) */

void __thiscall CSHA1::Update(CSHA1 *this,uchar *param_1,uint param_2)

{
  uint local_14;
  size_t local_10;
  
  local_14 = *(uint *)(this + 0x14) >> 3 & 0x3f;
  *(uint *)(this + 0x14) = *(int *)(this + 0x14) + param_2 * 8;
  if (*(uint *)(this + 0x14) < param_2 << 3) {
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  }
  *(uint *)(this + 0x18) = *(int *)(this + 0x18) + (param_2 >> 0x1d);
  if (local_14 + param_2 < 0x40) {
    local_10 = 0;
  }
  else {
    local_10 = 0x40 - local_14;
    memcpy(this + local_14 + 0x20,param_1,local_10);
    Transform(this,(uint *)this,(uchar *)(this + 0x20));
    for (; local_10 + 0x3f < param_2; local_10 = local_10 + 0x40) {
      Transform(this,(uint *)this,param_1 + local_10);
    }
    local_14 = 0;
  }
  if (param_2 != local_10) {
    memcpy(this + local_14 + 0x20,param_1 + local_10,param_2 - local_10);
  }
  return;
}
```

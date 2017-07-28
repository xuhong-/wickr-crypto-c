/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: stream.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "stream.pb-c.h"
void   wickr__proto__handshake__seed__init
                     (Wickr__Proto__Handshake__Seed         *message)
{
  static Wickr__Proto__Handshake__Seed init_value = WICKR__PROTO__HANDSHAKE__SEED__INIT;
  *message = init_value;
}
void   wickr__proto__handshake__key_exchange__init
                     (Wickr__Proto__Handshake__KeyExchange         *message)
{
  static Wickr__Proto__Handshake__KeyExchange init_value = WICKR__PROTO__HANDSHAKE__KEY_EXCHANGE__INIT;
  *message = init_value;
}
void   wickr__proto__handshake__response__init
                     (Wickr__Proto__Handshake__Response         *message)
{
  static Wickr__Proto__Handshake__Response init_value = WICKR__PROTO__HANDSHAKE__RESPONSE__INIT;
  *message = init_value;
}
void   wickr__proto__handshake__finish__init
                     (Wickr__Proto__Handshake__Finish         *message)
{
  static Wickr__Proto__Handshake__Finish init_value = WICKR__PROTO__HANDSHAKE__FINISH__INIT;
  *message = init_value;
}
void   wickr__proto__handshake__init
                     (Wickr__Proto__Handshake         *message)
{
  static Wickr__Proto__Handshake init_value = WICKR__PROTO__HANDSHAKE__INIT;
  *message = init_value;
}
size_t wickr__proto__handshake__get_packed_size
                     (const Wickr__Proto__Handshake *message)
{
  assert(message->base.descriptor == &wickr__proto__handshake__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t wickr__proto__handshake__pack
                     (const Wickr__Proto__Handshake *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &wickr__proto__handshake__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t wickr__proto__handshake__pack_to_buffer
                     (const Wickr__Proto__Handshake *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &wickr__proto__handshake__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Wickr__Proto__Handshake *
       wickr__proto__handshake__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Wickr__Proto__Handshake *)
     protobuf_c_message_unpack (&wickr__proto__handshake__descriptor,
                                allocator, len, data);
}
void   wickr__proto__handshake__free_unpacked
                     (Wickr__Proto__Handshake *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &wickr__proto__handshake__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   wickr__proto__stream_key__init
                     (Wickr__Proto__StreamKey         *message)
{
  static Wickr__Proto__StreamKey init_value = WICKR__PROTO__STREAM_KEY__INIT;
  *message = init_value;
}
size_t wickr__proto__stream_key__get_packed_size
                     (const Wickr__Proto__StreamKey *message)
{
  assert(message->base.descriptor == &wickr__proto__stream_key__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t wickr__proto__stream_key__pack
                     (const Wickr__Proto__StreamKey *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &wickr__proto__stream_key__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t wickr__proto__stream_key__pack_to_buffer
                     (const Wickr__Proto__StreamKey *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &wickr__proto__stream_key__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Wickr__Proto__StreamKey *
       wickr__proto__stream_key__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Wickr__Proto__StreamKey *)
     protobuf_c_message_unpack (&wickr__proto__stream_key__descriptor,
                                allocator, len, data);
}
void   wickr__proto__stream_key__free_unpacked
                     (Wickr__Proto__StreamKey *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &wickr__proto__stream_key__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor wickr__proto__handshake__seed__field_descriptors[1] =
{
  {
    "node_info",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Wickr__Proto__Handshake__Seed, node_info),
    &wickr__proto__node__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned wickr__proto__handshake__seed__field_indices_by_name[] = {
  0,   /* field[0] = node_info */
};
static const ProtobufCIntRange wickr__proto__handshake__seed__number_ranges[1 + 1] =
{
  { 2, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor wickr__proto__handshake__seed__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "wickr.proto.Handshake.Seed",
  "Seed",
  "Wickr__Proto__Handshake__Seed",
  "wickr.proto",
  sizeof(Wickr__Proto__Handshake__Seed),
  1,
  wickr__proto__handshake__seed__field_descriptors,
  wickr__proto__handshake__seed__field_indices_by_name,
  1,  wickr__proto__handshake__seed__number_ranges,
  (ProtobufCMessageInit) wickr__proto__handshake__seed__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor wickr__proto__handshake__key_exchange__field_descriptors[2] =
{
  {
    "sender_pub",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Wickr__Proto__Handshake__KeyExchange, has_sender_pub),
    offsetof(Wickr__Proto__Handshake__KeyExchange, sender_pub),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "exchange_data",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Wickr__Proto__Handshake__KeyExchange, has_exchange_data),
    offsetof(Wickr__Proto__Handshake__KeyExchange, exchange_data),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned wickr__proto__handshake__key_exchange__field_indices_by_name[] = {
  1,   /* field[1] = exchange_data */
  0,   /* field[0] = sender_pub */
};
static const ProtobufCIntRange wickr__proto__handshake__key_exchange__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor wickr__proto__handshake__key_exchange__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "wickr.proto.Handshake.KeyExchange",
  "KeyExchange",
  "Wickr__Proto__Handshake__KeyExchange",
  "wickr.proto",
  sizeof(Wickr__Proto__Handshake__KeyExchange),
  2,
  wickr__proto__handshake__key_exchange__field_descriptors,
  wickr__proto__handshake__key_exchange__field_indices_by_name,
  1,  wickr__proto__handshake__key_exchange__number_ranges,
  (ProtobufCMessageInit) wickr__proto__handshake__key_exchange__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor wickr__proto__handshake__response__field_descriptors[2] =
{
  {
    "key_exchange",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Wickr__Proto__Handshake__Response, key_exchange),
    &wickr__proto__handshake__key_exchange__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "response_key",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Wickr__Proto__Handshake__Response, response_key),
    &wickr__proto__handshake__seed__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned wickr__proto__handshake__response__field_indices_by_name[] = {
  0,   /* field[0] = key_exchange */
  1,   /* field[1] = response_key */
};
static const ProtobufCIntRange wickr__proto__handshake__response__number_ranges[1 + 1] =
{
  { 2, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor wickr__proto__handshake__response__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "wickr.proto.Handshake.Response",
  "Response",
  "Wickr__Proto__Handshake__Response",
  "wickr.proto",
  sizeof(Wickr__Proto__Handshake__Response),
  2,
  wickr__proto__handshake__response__field_descriptors,
  wickr__proto__handshake__response__field_indices_by_name,
  1,  wickr__proto__handshake__response__number_ranges,
  (ProtobufCMessageInit) wickr__proto__handshake__response__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor wickr__proto__handshake__finish__field_descriptors[1] =
{
  {
    "key_exchange",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Wickr__Proto__Handshake__Finish, key_exchange),
    &wickr__proto__handshake__key_exchange__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned wickr__proto__handshake__finish__field_indices_by_name[] = {
  0,   /* field[0] = key_exchange */
};
static const ProtobufCIntRange wickr__proto__handshake__finish__number_ranges[1 + 1] =
{
  { 2, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor wickr__proto__handshake__finish__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "wickr.proto.Handshake.Finish",
  "Finish",
  "Wickr__Proto__Handshake__Finish",
  "wickr.proto",
  sizeof(Wickr__Proto__Handshake__Finish),
  1,
  wickr__proto__handshake__finish__field_descriptors,
  wickr__proto__handshake__finish__field_indices_by_name,
  1,  wickr__proto__handshake__finish__number_ranges,
  (ProtobufCMessageInit) wickr__proto__handshake__finish__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor wickr__proto__handshake__field_descriptors[4] =
{
  {
    "version",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Wickr__Proto__Handshake, version),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "seed",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Wickr__Proto__Handshake, payload_case),
    offsetof(Wickr__Proto__Handshake, seed),
    &wickr__proto__handshake__seed__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "response",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Wickr__Proto__Handshake, payload_case),
    offsetof(Wickr__Proto__Handshake, response),
    &wickr__proto__handshake__response__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "finish",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Wickr__Proto__Handshake, payload_case),
    offsetof(Wickr__Proto__Handshake, finish),
    &wickr__proto__handshake__finish__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned wickr__proto__handshake__field_indices_by_name[] = {
  3,   /* field[3] = finish */
  2,   /* field[2] = response */
  1,   /* field[1] = seed */
  0,   /* field[0] = version */
};
static const ProtobufCIntRange wickr__proto__handshake__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor wickr__proto__handshake__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "wickr.proto.Handshake",
  "Handshake",
  "Wickr__Proto__Handshake",
  "wickr.proto",
  sizeof(Wickr__Proto__Handshake),
  4,
  wickr__proto__handshake__field_descriptors,
  wickr__proto__handshake__field_indices_by_name,
  1,  wickr__proto__handshake__number_ranges,
  (ProtobufCMessageInit) wickr__proto__handshake__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor wickr__proto__stream_key__field_descriptors[4] =
{
  {
    "cipher_key",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Wickr__Proto__StreamKey, has_cipher_key),
    offsetof(Wickr__Proto__StreamKey, cipher_key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "evolution_key",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Wickr__Proto__StreamKey, has_evolution_key),
    offsetof(Wickr__Proto__StreamKey, evolution_key),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "packets_per_evo",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Wickr__Proto__StreamKey, has_packets_per_evo),
    offsetof(Wickr__Proto__StreamKey, packets_per_evo),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "user_data",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Wickr__Proto__StreamKey, has_user_data),
    offsetof(Wickr__Proto__StreamKey, user_data),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned wickr__proto__stream_key__field_indices_by_name[] = {
  0,   /* field[0] = cipher_key */
  1,   /* field[1] = evolution_key */
  2,   /* field[2] = packets_per_evo */
  3,   /* field[3] = user_data */
};
static const ProtobufCIntRange wickr__proto__stream_key__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor wickr__proto__stream_key__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "wickr.proto.StreamKey",
  "StreamKey",
  "Wickr__Proto__StreamKey",
  "wickr.proto",
  sizeof(Wickr__Proto__StreamKey),
  4,
  wickr__proto__stream_key__field_descriptors,
  wickr__proto__stream_key__field_indices_by_name,
  1,  wickr__proto__stream_key__number_ranges,
  (ProtobufCMessageInit) wickr__proto__stream_key__init,
  NULL,NULL,NULL    /* reserved[123] */
};

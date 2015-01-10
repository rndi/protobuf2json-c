/*
 * Copyright (c) 2014 Oleg Efimov <efimovov@gmail.com>
 *
 * protobuf2json-c is free software; you can redistribute it
 * and/or modify it under the terms of the MIT license.
 * See LICENSE for details.
 */

TEST_DECLARE(protobuf2json_file__success)
TEST_DECLARE(protobuf2json_file__error_alloc)
TEST_DECLARE(protobuf2json_file__error_cannot_open_null_file)
TEST_DECLARE(protobuf2json_file__error_cannot_open_null_fopen_mode)
TEST_DECLARE(protobuf2json_file__error_cannot_open_unexistent_file)
TEST_DECLARE(protobuf2json_file__error_cannot_dump_file)

TEST_DECLARE(protobuf2json_string__required_field)
TEST_DECLARE(protobuf2json_string__optional_field)
TEST_DECLARE(protobuf2json_string__default_values)
TEST_DECLARE(protobuf2json_string__error_in_nested_message)
TEST_DECLARE(protobuf2json_string__error_cannot_create_json_object)
TEST_DECLARE(protobuf2json_string__error_cannot_create_json_value)
TEST_DECLARE(protobuf2json_string__error_cannot_dump_string)

TEST_DECLARE(json2protobuf_file__success)
TEST_DECLARE(json2protobuf_file__error_cannot_parse_bad_message)
TEST_DECLARE(json2protobuf_file__error_cannot_parse_bad_json)
TEST_DECLARE(json2protobuf_file__error_cannot_parse_unexistent_file)

TEST_DECLARE(json2protobuf_string__error_cannot_parse_wrong_string)
TEST_DECLARE(json2protobuf_string__error_duplicate_field)
TEST_DECLARE(json2protobuf_string__error_is_not_array)
TEST_DECLARE(json2protobuf_string__error_unknown_field)
TEST_DECLARE(json2protobuf_string__error_unknown_enum_value)
TEST_DECLARE(json2protobuf_string__error_required_is_missing)
TEST_DECLARE(json2protobuf_string__error_is_not_object_required_for_message)
TEST_DECLARE(json2protobuf_string__error_is_not_integer_required_for_int32)
TEST_DECLARE(json2protobuf_string__error_is_not_integer_required_for_sint32)
TEST_DECLARE(json2protobuf_string__error_is_not_integer_required_for_sfixed32)
TEST_DECLARE(json2protobuf_string__error_is_not_integer_required_for_uint32)
TEST_DECLARE(json2protobuf_string__error_is_not_integer_required_for_fixed32)
TEST_DECLARE(json2protobuf_string__error_is_not_integer_required_for_int64)
TEST_DECLARE(json2protobuf_string__error_is_not_integer_required_for_sint64)
TEST_DECLARE(json2protobuf_string__error_is_not_integer_required_for_sfixed64)
TEST_DECLARE(json2protobuf_string__error_is_not_integer_required_for_uint64)
TEST_DECLARE(json2protobuf_string__error_is_not_integer_required_for_fixed64)
TEST_DECLARE(json2protobuf_string__error_is_not_real_number_required_for_float)
TEST_DECLARE(json2protobuf_string__error_is_not_real_number_required_for_double)
TEST_DECLARE(json2protobuf_string__error_is_not_boolean_required_for_bool)
TEST_DECLARE(json2protobuf_string__error_is_not_string_required_for_enum)
TEST_DECLARE(json2protobuf_string__error_is_not_string_required_for_string)
TEST_DECLARE(json2protobuf_string__error_is_not_string_required_for_bytes)

TEST_DECLARE(reversible__messages)
TEST_DECLARE(reversible__default_values)
TEST_DECLARE(reversible__numbers)
TEST_DECLARE(reversible__strings)
TEST_DECLARE(reversible__bytes)

TASK_LIST_START
  TEST_ENTRY(protobuf2json_file__success)
  TEST_ENTRY(protobuf2json_file__error_alloc)
  TEST_ENTRY(protobuf2json_file__error_cannot_open_null_file)
  TEST_ENTRY(protobuf2json_file__error_cannot_open_null_fopen_mode)
  TEST_ENTRY(protobuf2json_file__error_cannot_open_unexistent_file)
  TEST_ENTRY(protobuf2json_file__error_cannot_dump_file)

  TEST_ENTRY(protobuf2json_string__required_field)
  TEST_ENTRY(protobuf2json_string__optional_field)
  TEST_ENTRY(protobuf2json_string__default_values)
  TEST_ENTRY(protobuf2json_string__error_in_nested_message)
  TEST_ENTRY(protobuf2json_string__error_cannot_create_json_object)
  TEST_ENTRY(protobuf2json_string__error_cannot_create_json_value)
  TEST_ENTRY(protobuf2json_string__error_cannot_dump_string)

  TEST_ENTRY(json2protobuf_file__success)
  TEST_ENTRY(json2protobuf_file__error_cannot_parse_bad_message)
  TEST_ENTRY(json2protobuf_file__error_cannot_parse_bad_json)
  TEST_ENTRY(json2protobuf_file__error_cannot_parse_unexistent_file)

  TEST_ENTRY(json2protobuf_string__error_cannot_parse_wrong_string)
  TEST_ENTRY(json2protobuf_string__error_duplicate_field)
  TEST_ENTRY(json2protobuf_string__error_is_not_array)
  TEST_ENTRY(json2protobuf_string__error_unknown_field)
  TEST_ENTRY(json2protobuf_string__error_unknown_enum_value)
  TEST_ENTRY(json2protobuf_string__error_required_is_missing)
  TEST_ENTRY(json2protobuf_string__error_is_not_object_required_for_message)
  TEST_ENTRY(json2protobuf_string__error_is_not_integer_required_for_int32)
  TEST_ENTRY(json2protobuf_string__error_is_not_integer_required_for_sint32)
  TEST_ENTRY(json2protobuf_string__error_is_not_integer_required_for_sfixed32)
  TEST_ENTRY(json2protobuf_string__error_is_not_integer_required_for_uint32)
  TEST_ENTRY(json2protobuf_string__error_is_not_integer_required_for_fixed32)
  TEST_ENTRY(json2protobuf_string__error_is_not_integer_required_for_int64)
  TEST_ENTRY(json2protobuf_string__error_is_not_integer_required_for_sint64)
  TEST_ENTRY(json2protobuf_string__error_is_not_integer_required_for_sfixed64)
  TEST_ENTRY(json2protobuf_string__error_is_not_integer_required_for_uint64)
  TEST_ENTRY(json2protobuf_string__error_is_not_integer_required_for_fixed64)
  TEST_ENTRY(json2protobuf_string__error_is_not_real_number_required_for_float)
  TEST_ENTRY(json2protobuf_string__error_is_not_real_number_required_for_double)
  TEST_ENTRY(json2protobuf_string__error_is_not_boolean_required_for_bool)
  TEST_ENTRY(json2protobuf_string__error_is_not_string_required_for_enum)
  TEST_ENTRY(json2protobuf_string__error_is_not_string_required_for_string)
  TEST_ENTRY(json2protobuf_string__error_is_not_string_required_for_bytes)

  TEST_ENTRY(reversible__messages)
  TEST_ENTRY(reversible__default_values)
  TEST_ENTRY(reversible__numbers)
  TEST_ENTRY(reversible__strings)
  TEST_ENTRY(reversible__bytes)
TASK_LIST_END

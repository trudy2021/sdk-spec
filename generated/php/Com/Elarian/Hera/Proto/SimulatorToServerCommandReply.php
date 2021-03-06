<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: simulator_socket.proto

namespace Com\Elarian\Hera\Proto;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>com.elarian.hera.proto.SimulatorToServerCommandReply</code>
 */
class SimulatorToServerCommandReply extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>bool status = 1;</code>
     */
    protected $status = false;
    /**
     * Generated from protobuf field <code>string description = 2;</code>
     */
    protected $description = '';
    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.OutboundMessage message = 3;</code>
     */
    protected $message = null;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type bool $status
     *     @type string $description
     *     @type \Com\Elarian\Hera\Proto\OutboundMessage $message
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\SimulatorSocket::initOnce();
        parent::__construct($data);
    }

    /**
     * Generated from protobuf field <code>bool status = 1;</code>
     * @return bool
     */
    public function getStatus()
    {
        return $this->status;
    }

    /**
     * Generated from protobuf field <code>bool status = 1;</code>
     * @param bool $var
     * @return $this
     */
    public function setStatus($var)
    {
        GPBUtil::checkBool($var);
        $this->status = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>string description = 2;</code>
     * @return string
     */
    public function getDescription()
    {
        return $this->description;
    }

    /**
     * Generated from protobuf field <code>string description = 2;</code>
     * @param string $var
     * @return $this
     */
    public function setDescription($var)
    {
        GPBUtil::checkString($var, True);
        $this->description = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.OutboundMessage message = 3;</code>
     * @return \Com\Elarian\Hera\Proto\OutboundMessage
     */
    public function getMessage()
    {
        return isset($this->message) ? $this->message : null;
    }

    public function hasMessage()
    {
        return isset($this->message);
    }

    public function clearMessage()
    {
        unset($this->message);
    }

    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.OutboundMessage message = 3;</code>
     * @param \Com\Elarian\Hera\Proto\OutboundMessage $var
     * @return $this
     */
    public function setMessage($var)
    {
        GPBUtil::checkMessage($var, \Com\Elarian\Hera\Proto\OutboundMessage::class);
        $this->message = $var;

        return $this;
    }

}

